"""
根据用户 ID 来用于获取所有的歌单 ID
"""
import datetime
import math
import random
import time
from concurrent.futures import ProcessPoolExecutor

import requests
from bs4 import BeautifulSoup
from selenium import webdriver
from src import sql_sqlite as sql
from src.util.user_agents import agents


class Album(object):
    headers = {
        'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'zh-CN,zh;q=0.8,en;q=0.6',
        'Cache-Control': 'no-cache',
        'Connection': 'keep-alive',
        #'Cookie': ,
        'DNT': '1',
        'Host': 'music.163.com',
        'Pragma': 'no-cache',
        'Referer': 'http://music.163.com/',
        'Upgrade-Insecure-Requests': '1',
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/53.0.2785.143 Safari/537.36'
    }

    def savePlaylist(self, user_id):

        # 获取歌手个人主页
        agent = random.choice(agents)
        self.headers["User-Agent"] = agent
        url = 'http://music.163.com/user/home?id=' + str(user_id)
        option = webdriver.ChromeOptions()  # 设置不弹出浏览器
        option.headless = True
        # driver = webdriver.Chrome(chrome_options=option)  # webdriver实例化
        driver = webdriver.Chrome(chrome_options=option, executable_path='./data/chromedriver.exe')

        driver.get(url)
        driver.switch_to.frame('g_iframe')
        # 找到指定iframe标签（这里是g_iframe）然后跳入
        driver.implicitly_wait(10)  # 隐式等待
        htmlrec = driver.page_source
        # r = requests.get(url, headers=self.headers)

        # 网页解析
        soup = BeautifulSoup(htmlrec, 'html.parser')
        soup = soup.find('ul', id='cBox')
        # 所有图片
        imgs = soup.find_all('div', attrs={'class': 'u-cover u-cover-1'})
        # 专辑信息
        playlists = soup.find_all('a', attrs={'class': 'tit f-thide s-fc0'})  # 获取所有专辑
        if len(playlists) == 0:
            return
        for index, playlist in enumerate(playlists):
            # 专辑id
            playlist_id = playlist['href'].replace('/playlist?id=', '')
            # 专辑图片地址
            img_url = imgs[index].img.get('src').replace('?param=140y140', '')
            try:
                # 网页中标题为title
                sql.insert_playlist(playlist_id, user_id, playlist['title'], img_url)
            except Exception as e:
                # 打印错误日志
                print(str(playlist) + ' insert error : ' + str(e))
                time.sleep(1)


# def savePlaylistBatch(index):
#     my_album = Album()
#     offset = 1000 * index
#     artists = sql.get_artist_page(offset, 1000)
#     print("index:", index, "offset:", offset, "artists :", len(artists), "start")
#     for i in artists:
#         try:
#             my_album.savePlaylist(i['user_id'])
#         except Exception as e:
#             # 打印错误日志
#             print(str(i), ' internal  error : ', str(e))
#             time.sleep(2)
#     print("index:", index, "finished")


def playlistSpider(user_id):
    print("======= 开始爬 歌单 信息 ===========")
    startTime = datetime.datetime.now()
    print(startTime.strftime('%Y-%m-%d %H:%M:%S'))
    # # 所有歌手数量
    # artists_num = sql.get_all_artist_num()
    # # 批次
    # batch = math.ceil(artists_num.get('num') / 1000.0)
    # # 构建线程池
    # pool = ProcessPoolExecutor(3)
    # for index in range(0, batch):
    #     pool.submit(saveAlbumBatch, index)
    # pool.shutdown(wait=True)

    my_album = Album()
    try:
        my_album.savePlaylist(user_id)
    except Exception as e:
        # 打印错误日志
        print(str(user_id), ' internal  error : ', str(e))
        time.sleep(1)
    print("======= 结束爬 歌单 信息 ===========")
    endTime = datetime.datetime.now()
    print(endTime.strftime('%Y-%m-%d %H:%M:%S'))
    print("耗时：", (endTime - startTime).seconds, "秒")

if __name__ == '__main__':
    playlistSpider('x')
