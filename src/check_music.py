from src import sql_sqlite as sql

if __name__ == '__main__':
    user_id1 = 'x'
    user_id2 = 'x'
    playlist = sql.get_same_musicinfo(user_id1, user_id2)
    n = 1
    for music in playlist:
        print(str(n)+" | "+music['l1']+" | "+music['l2']+" | "+music['music_name'])
        n += 1