from src import sql_sqlite as sql


def analysis(user_id):
    total = 0
    l = sql.less_than_one(user_id)
    rs = ''
    for song in l:
        rs = rs + str(song['song']) + '首相同' + str(song['same']) + '人  '
        total += int(song['same'])
    print('与数据库中的用户', total, '人有共同喜欢的歌曲')
    print(rs)
