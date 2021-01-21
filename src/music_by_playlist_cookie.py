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



class Music(object):
    headers = {

        'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'zh-CN,zh;q=0.8,en;q=0.6',
        'Cache-Control': 'no-cache',
        'Connection': 'keep-alive',
        # 获取数据多了之后，就会被禁用访问,可以使用代理
        # 'Cookie': '',
        'DNT': '1',
        'Host': 'music.163.com',
        'Pragma': 'no-cache',
        'Referer': 'http://music.163.com/',
        'Upgrade-Insecure-Requests': '1',
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/53.0.2785.143 Safari/537.36'

    }

    def saveMusic(self, playlist_id):
        # 根据歌曲id获取歌词
        agent = random.choice(agents)
        self.headers["User-Agent"] = agent
        # url = 'http://music.163.com/api/playlist/detail?id=' + str(playlist_id) + '&offset=0&total=true&limit=1001'
        url = 'https://music.163.com/api/v6/playlist/detail?id=' + str(playlist_id)
        # 获取歌单
        r = requests.get(url, headers=self.headers)
        # 解析
        musicJson = json.loads(r.text)
        for item in musicJson.get('playlist').get('tracklds'):
            music_id = item['id']
            music_name = item['name']
            try:
                sql.insert_playlist_music(playlist_id, music_id, music_name)
            except Exception as e:
                # 打印错误日志
                print(playlist_id, music_id, music_name, ' inset db error: ', str(e))
                # traceback.print_exc()
                time.sleep(1)


def saveMusicBatch(user_id, index):
    my_music = Music()
    offset = 8 * index
    playlist = sql.get_playlist_music_page(user_id, offset, 8)

    print("线程:", index, "页数:", offset, "歌单处理数 :", len(playlist), "start")

    for item in playlist:
        try:
            # my_music.saveMusic(item['playlist_id'])
            my_music.saveMusic('940064050')

        except Exception as e:
            # 打印错误日志
            print(item['playlist_id'], ' internal  error : ' + str(e))
            # traceback.print_exc()
            time.sleep(1)
    print("线程:", index, "完成")



def pmusicSpider(user_id):
    print("开始爬 歌曲 信息...")
    startTime = datetime.datetime.now()
    print(startTime.strftime('%Y-%m-%d %H:%M:%S'))
    # 所有歌手数量
    # 打包后出现多个进程

    musics_num = sql.get_playlist_music_num(user_id)
    musics_num = {'num':8}
    if (musics_num.get('num') == 0):
        print('没有找到该用户的歌单')
    else:
        print("歌单总数 :", musics_num.get('num'), "开始")
        batch = math.ceil(musics_num.get('num') / 8.0)
        pool = ProcessPoolExecutor(1)
        for index in range(0, batch):
            pool.submit(saveMusicBatch, user_id, index)
        pool.shutdown(wait=True)
    print("结束爬 歌曲 信息...")
    endTime = datetime.datetime.now()
    print(endTime.strftime('%Y-%m-%d %H:%M:%S'))
    print("爬歌曲耗时：", (endTime - startTime).seconds, "秒")
if __name__ == '__main__':
    pmusicSpider('600006922')
