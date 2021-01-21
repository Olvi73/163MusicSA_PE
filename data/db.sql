-- 歌词表
CREATE TABLE `lyrics` (
  `music_id` BIGINT(20) NOT NULL,
  `lyric` TEXT DEFAULT NULL,
  PRIMARY KEY (`music_id`)
) 

-- 歌曲表
CREATE TABLE `musics` (
  `user_id` INT(20) NOT NULL,
  `music_id` INT(20) NOT NULL,
  `music_name` VARCHAR(255) DEFAULT NULL,
  `nickname` VARCHAR(255) DEFAULT NULL,
  PRIMARY KEY (`user_id`,`music_id`)
)

-- 歌单表
CREATE TABLE `playlist` (
  `user_id` bigint(20) NOT NULL,
  `playlist_id` bigint(20) NOT NULL,
  `title` varchar(255) DEFAULT NULL,
  `img` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`user_id`,`playlist_id`)
)


-- 歌单歌曲表
CREATE TABLE `playlist_music` (
  `playlist_id` bigint(20) NOT NULL,
  `music_id` INT(20) DEFAULT NULL,
  `music_name` VARCHAR(255) DEFAULT NULL,
  PRIMARY KEY (`playlist_id`,`music_id`)
)