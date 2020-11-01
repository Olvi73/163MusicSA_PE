"""
根据歌曲 ID 获得所有的歌曲所对应的歌词
"""
import sys
import datetime
import json
import random
import re
import time
import requests
import math
import concurrent.futures
import src.util.user_agents
import src.sql_sqlite
from concurrent.futures.process import ProcessPoolExecutor
from src import sql_sqlite as sql
from src.util.user_agents import agents

words = ['编曲', '混音', '录音室', '录音师', '录音', '母带', '制作', '贝斯']


# 自定义清除内容
def clearInf(lyr):
    try:
        rs = re.search('.*:.*(\n|.)', lyr).group()
        lyr = lyr.replace(rs, '')
    except:
        pass
    try:
        rs = re.search('.*：.*(\n|.)', lyr).group()
        lyr = lyr.replace(rs, '')
    except:
        pass
    # 清除  作曲 :  nameA/nameB \n
    n = lyr.count(":") + lyr.count("：")
    if (n != 0):
        return clearInf(lyr)
    return lyr


class LyricComment(object):
    headers = {

        'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'zh-CN,zh;q=0.8,en;q=0.6',
        'Cache-Control': 'no-cache',
        'Connection': 'keep-alive',
        # 获取数据多了之后，就会被禁用访问,可以使用代理
        # 'Cookie': 'MUSIC_U=;',
        'DNT': '1',
        'Host': 'music.163.com',
        'Pragma': 'no-cache',
        'Referer': 'http://music.163.com/',
        'Upgrade-Insecure-Requests': '1',
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/53.0.2785.143 Safari/537.36'

    }

    def saveLyric(self, music_id):
        # 根据歌曲id获取歌词
        agent = random.choice(agents)
        self.headers["User-Agent"] = agent
        url = 'http://music.163.com/api/song/lyric?id=' + str(music_id) + '&lv=1&kv=1&tv=1'
        # 获取歌词
        r = requests.get(url, headers=self.headers)
        # 解析
        lyricJson = json.loads(r.text)
        if ('lrc' in lyricJson):
            # 把歌词里的时间干掉
            regex = re.compile(r'\[.*\]')
            finalLyric = re.sub(regex, '', lyricJson['lrc']['lyric']).strip()
            # 把歌词中的作词作曲等信息去掉，利用中英文的:来判断

            n = finalLyric.count(":") + finalLyric.count("：")
            if (n != 0):
                finalLyric = clearInf(finalLyric)
            # for n in range(len(words)):
            #     finalLyric=finalLyric.replace(words[n],'')
            # 临时清理

            # 持久化数据库
            try:
                sql.insert_lyric(music_id, finalLyric)
            except Exception as e:
                print(music_id, "insert error", str(e))
        else:
            print(str(music_id), "has no lyric", lyricJson)
        # 请求完成后睡一秒 防作弊
        time.sleep(1)


def saveLyricBatch(user_id, index):
    my_lyric_comment = LyricComment()
    offset = 34 * index
    musics = sql.get_music_page(user_id, offset, 34)
    print("index:", index, "offset:", offset, "musics :", len(musics), "start")

    for item in musics:
        flag = sql.try_music(item['music_id']).get('num')
        if (flag == 0):
            try:
                my_lyric_comment.saveLyric(item['music_id'])
            except Exception as e:
                # 打印错误日志
                print(item['music_id'], ' internal  error : ' + str(e))
                # traceback.print_exc()
                time.sleep(1)
    print("index:", index, "finished")


def lyricSpider(user_id):
    print("开始爬 歌词 信息...")
    startTime = datetime.datetime.now()
    print(startTime.strftime('%Y-%m-%d %H:%M:%S'))
    # 所有歌手数量
    # 打包后出现多个进程

    musics_num = sql.get_music_num(user_id)
    if (musics_num.get('num')==0):
        print('没有找到该用户信息')
    else:
        print("musics :", musics_num.get('num'), "start")
        batch = math.ceil(musics_num.get('num') / 34.0)
        pool = ProcessPoolExecutor(3)
        for index in range(0, batch):
            pool.submit(saveLyricBatch, user_id, index)
        pool.shutdown(wait=True)
    print("结束爬 歌词 信息...")
    endTime = datetime.datetime.now()
    print(endTime.strftime('%Y-%m-%d %H:%M:%S'))
    print("爬歌词耗时：", (endTime - startTime).seconds, "秒")
# if __name__ == '__main__':
#     lyricSpider()
