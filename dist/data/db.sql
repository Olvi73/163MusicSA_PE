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