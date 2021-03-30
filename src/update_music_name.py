
"""
根据相同的歌曲 ID 更新歌曲名
不同的歌曲不会更新名字
"""
import sys
import datetime
import json
import random
import re
import time
import traceback

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
        'DNT': '1',
        'Pragma': 'no-cache',
        'Referer': 'http://api.no0a.cn/',
        'Upgrade-Insecure-Requests': '1',
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/53.0.2785.143 Safari/537.36'

    }

    def saveMusic(self, music_id):
        # 根据歌曲id获取歌词
        agent = random.choice(agents)
        self.headers["User-Agent"] = agent
        url = 'https://api.no0a.cn/api/cloudmusic/info/' + str(music_id)
        # 获取歌单
        r = requests.get(url, headers=self.headers)
        # 解析
        musicJson = json.loads(r.text)
        music_name=musicJson.get('musicinfo').get('name')
        try:
            sql.update_playlist_music(music_name, music_id)
        except Exception as e:
            # 打印错误日志
            print(music_name, ' inset db error: ', str(e))
            # traceback.print_exc()
            # time.sleep(1)


def pmusicSpider(user_id1, user_id2):
    print("开始匹配 相同歌曲 信息...")
    startTime = datetime.datetime.now()
    print(startTime.strftime('%Y-%m-%d %H:%M:%S'))
    # 所有歌手数量
    # 打包后出现多个进程
    my_music = Music()
    playlist = sql.get_same_music(user_id1, user_id2)
    print(playlist)
    for item in playlist:
        try:
            my_music.saveMusic(item['music_id'])
        except Exception as e:
            # 打印错误日志
            print(item['music_id'], ' internal  error : ' + str(e))
            traceback.print_exc()
            # time.sleep(1)

    print("结束匹配 相同歌曲 信息...")
    endTime = datetime.datetime.now()
    print(endTime.strftime('%Y-%m-%d %H:%M:%S'))
    print("匹配歌曲名字耗时：", (endTime - startTime).seconds, "秒")
if __name__ == '__main__':
    pmusicSpider('x', 'x')

