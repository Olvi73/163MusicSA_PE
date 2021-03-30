"""
    sqlite3连接数据库
"""
import sqlite3
import contextlib
from contextlib import contextmanager


# 以字典形式返回结果
def dict_factory(cursor, row):
    d = {}
    for idx, col in enumerate(cursor.description):
        d[col[0]] = row[idx]
    return d


global connection
# 设置同线程判断为false，方便在pyqt中多线程调用
# connection = sqlite3.connect(r'./data/data.db', check_same_thread=False)
connection = sqlite3.connect(r'../data/data.db', check_same_thread=False)
connection.row_factory = dict_factory


# 上下文管理器
@contextmanager
def get_cursor(con: connection):
    cu = con.cursor()
    try:
        yield cu
    finally:
        cu.close()


def get_musics():
    with get_cursor(connection) as cursor:
        sql = "SELECT * FROM `musics` "
        cursor.execute(sql, ())
        return cursor.fetchall()


def get_lyrics():
    with get_cursor(connection) as cursor:
        sql = "SELECT * FROM `lyrics` "
        cursor.execute(sql, ())
        return cursor.fetchall()


# 根据用户id获取其排行的音乐id
def get_music(user_id):
    with get_cursor(connection) as cursor:
        sql = "SELECT `music_id` FROM `musics` WHERE user_id=? ORDER BY music_id"
        cursor.execute(sql, [user_id])
        return cursor.fetchall()


# 获取歌曲总数
def get_music_num(user_id):
    with get_cursor(connection) as cursor:
        sql = "SELECT count(1) as num FROM `musics` WHERE user_id=?"
        cursor.execute(sql, [user_id])
        return cursor.fetchone()


# 获取歌单总数
def get_playlist_music_num(user_id):
    with get_cursor(connection) as cursor:
        sql = "SELECT count(1) as num FROM `playlist` WHERE user_id=?"
        cursor.execute(sql, [user_id])
        return cursor.fetchone()


# 判断歌词是否存在
def try_music(music_id):
    with get_cursor(connection) as cursor:
        sql = "SELECT count(1) as num FROM `lyrics` WHERE music_id=?"
        cursor.execute(sql, [music_id])
        return cursor.fetchone()


# 根据用户id获取歌词
def get_lyric(user_id):
    with get_cursor(connection) as cursor:
        sql = "SELECT `lyric` FROM `lyrics`,`musics` WHERE lyrics.`music_id`=musics.`music_id` AND musics.`user_id`=?"
        cursor.execute(sql, [user_id])
        return cursor.fetchall()


def get_lyric_table(user_id):
    with get_cursor(connection) as cursor:
        sql = "SELECT lyrics.`music_id`,`lyric` FROM `lyrics`,`musics` WHERE lyrics.`music_id`=musics.`music_id` AND " \
              "musics.`user_id`=? "
        cursor.execute(sql, [user_id])
        return cursor.fetchall()


# 根据用户id获取歌手
def get_artist(user_id):
    with get_cursor(connection) as cursor:
        sql = "SELECT `nickname` FROM `musics` WHERE user_id=?"
        cursor.execute(sql, [user_id])
        return cursor.fetchall()


# 根据用户id获取table
def get_music_table(user_id):
    with get_cursor(connection) as cursor:
        sql = "select music_id,music_name,nickname from musics where user_id=?"
        cursor.execute(sql, [user_id])
        return cursor.fetchall()


# 保存歌词
def insert_lyric(music_id, lyric):
    with get_cursor(connection) as cursor:
        sql = "INSERT INTO `lyrics` (`music_id`, `lyric`) VALUES (?, ?)"
        cursor.execute(sql, (music_id, lyric))
    connection.commit()


# 保存音乐
def insert_music(user_id, music_id, music_name, nickname):
    with get_cursor(connection) as cursor:
        sql = "INSERT INTO `musics` (`user_id`,`music_id`, `music_name`, `nickname`) VALUES (?, ?, ?, ?)"
        cursor.execute(sql, (user_id, music_id, music_name, nickname))
    connection.commit()


# 保存歌单
def insert_playlist(playlist_id, user_id, title, img ):
    with get_cursor(connection) as cursor:
        sql = "INSERT INTO `playlist` (`playlist_id`,`user_id`, `title`, `img`) VALUES (?, ?, ?, ?)"
        cursor.execute(sql, (playlist_id, user_id, title, img))
    connection.commit()


# 保存歌单
# 2021/3/30 爬取的歌单只有前5首歌有歌曲名，后面的歌只有id
# def insert_playlist_music(playlist_id, music_id, music_name):
#     with get_cursor(connection) as cursor:
#         sql = "INSERT INTO `playlist_music` (`playlist_id`,`music_id`,`music_name`) VALUES (?, ?, ?)"
#         cursor.execute(sql, (playlist_id, music_id, music_name))
#     connection.commit()

def insert_playlist_music(playlist_id, music_id):
    with get_cursor(connection) as cursor:
        sql = "INSERT INTO `playlist_music` (`playlist_id`,`music_id`) VALUES (?, ?)"
        cursor.execute(sql, (playlist_id, music_id))
    connection.commit()

# 更新歌名
def update_playlist_music(music_name, music_id):
    with get_cursor(connection) as cursor:
        sql = "UPDATE `playlist_music` set `music_name`=? where music_id=?"
        cursor.execute(sql, (music_name, music_id))
    connection.commit()


# 分页获取音乐的 ID
def get_music_page(user_id, offset, size):
    with get_cursor(connection) as cursor:
        sql = "SELECT `music_id` FROM `musics` WHERE user_id=? limit ? offset ?"
        cursor.execute(sql, (user_id, size, offset))
        return cursor.fetchall()


# 分页获取歌单的 ID
def get_playlist_music_page(user_id, offset, size):
    with get_cursor(connection) as cursor:
        sql = "SELECT `playlist_id` FROM `playlist` WHERE user_id=? limit ? offset ?"
        cursor.execute(sql, (user_id, size, offset))
        return cursor.fetchall()


# 获取相同音乐的ID
def get_same_music(user_id1, user_id2):
    with get_cursor(connection) as cursor:
        sql = "select pm1.music_id\
                from playlist p1,playlist_music pm1,playlist p2,playlist_music pm2\
                where p1.user_id=?\
                and p1.playlist_id=pm1.playlist_id\
                and p2.user_id=?\
                and p2.playlist_id=pm2.playlist_id\
                and pm1.music_id=pm2.music_id\
                group by pm1.music_id;"
        cursor.execute(sql, (user_id1, user_id2))
        return cursor.fetchall()

# 获取相同歌曲所有信息
def get_same_musicinfo(user_id1, user_id2):
    with get_cursor(connection) as cursor:
        sql = "select p1.title as l1, p2.title as l2, pm1.music_id, pm1.music_name\
                from playlist p1, playlist_music pm1, playlist p2, playlist_music pm2\
                where p1.user_id=?\
                and p1.playlist_id=pm1.playlist_id\
                and p2.user_id=?\
                and p2.playlist_id=pm2.playlist_id\
                and pm1.music_id=pm2.music_id\
                group by pm1.music_id;"
        cursor.execute(sql, (user_id1, user_id2))
        return cursor.fetchall()

# 获取所有音乐的 ID\歌词\歌手
def get_all_music():
    with get_cursor(connection) as cursor:
        sql = "SELECT `music_id` FROM `musics` ORDER BY music_id"
        cursor.execute(sql, ())
        return cursor.fetchall()


def get_all_lyric():
    with get_cursor(connection) as cursor:
        sql = "SELECT `lyric` FROM `lyrics`  "
        cursor.execute(sql, ())
        return cursor.fetchall()


def get_all_artist():
    with get_cursor(connection) as cursor:
        sql = "SELECT `nickname` FROM `musics`  "
        cursor.execute(sql, ())
        return cursor.fetchall()


def less_than_one(user_id):
    with get_cursor(connection) as cursor:
        sql = "call proc (?)"
        cursor.execute(sql, [user_id])
        return cursor.fetchall()


def dis_connect():
    connection.close()


# 清库
def truncate_all():
    with get_cursor(connection) as cursor:
        sql = "delete from musics"
        cursor.execute(sql, ())
        sql = "delete from lyrics"
        cursor.execute(sql, ())
    connection.commit()

# if __name__ == '__main__':
#     a=get_music_table(81631214)
#     print(a)
#     type(a)
