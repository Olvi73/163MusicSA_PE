import datetime
import sys
import os

from src import sql_sqlite as sql
from src.lyric_by_music import lyricSpider
from src.music_by_songsall import musicSpider
from src.word_cloud_by_artist import cloudArtist
from src.word_cloud_by_lyric import cloudLyric
from src.lto import analysis



# 保存日志
class Logger(object):
    def __init__(self, filename="Default.log"):
        self.terminal = sys.stdout
        self.log = open(filename, "a")

    def write(self, message):
        self.terminal.write(message)
        self.log.write(message)

    def flush(self):
        pass


if __name__ == '__main__':
    path = os.path.abspath(os.path.dirname(__file__))
    # type = sys.getfilesystemencoding()

    user_id = '81631214'
    sys.stdout = Logger('log.txt')
    print("开始爬取网易云")
    startTime = datetime.datetime.now()
    print(startTime.strftime('%Y-%m-%d %H:%M:%S'))
    # 清空数据库
    # sql.truncate_all()
    # print("清空数据库完成")
    # 开始执行
    musicSpider(user_id)
    lyricSpider(user_id)
    cloudLyric(user_id)
    cloudArtist(user_id)
    # analysis(user_id)

    sql.dis_connect()
    endTime = datetime.datetime.now()
    print(endTime.strftime('%Y-%m-%d %H:%M:%S'))
    print("耗时：", (endTime - startTime).seconds, "秒")