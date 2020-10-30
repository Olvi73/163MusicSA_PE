"""
一般 Python 用于连接 MySQL 的工具：pymysql
"""
import sqlite3
from contextlib import contextmanager


# 以字典形式返回结果
def dict_factory(cursor, row):
    d = {}
    for idx, col in enumerate(cursor.description):
        d[col[0]] = row[idx]
    return d


global connection
connection = sqlite3.connect(r'src/data/data.db')
connection.row_factory = dict_factory


#上下文管理器
@contextmanager
def get_cursor(conn: connection):
    cu = conn.cursor()
    try:
        yield cu
    finally:
        cu.close()


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


# 获取歌曲总数
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


# 根据用户id获取歌手
def get_artist(user_id):
    with get_cursor(connection) as cursor:
        sql = "SELECT `nickname` FROM `musics` WHERE user_id=?"
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


# 分页获取音乐的 ID
def get_music_page(user_id, offset, size):
    with get_cursor(connection) as cursor:
        sql = "SELECT `music_id` FROM `musics` WHERE user_id=? limit ? offset ?"
        cursor.execute(sql, (user_id, size, offset))
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
#     print(get_all_artist())
