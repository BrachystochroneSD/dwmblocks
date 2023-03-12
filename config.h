#define CMDLENGTH 60
#define DELIMITER " | "
/* #define CLICKABLE_BLOCKS */

const Block blocks[] = {
    BLOCK("/home/sam/.script/bar/recording",    1,    1),
    BLOCK("/home/sam/.script/bar/mails",    10,    1),
    BLOCK("/home/sam/.script/bar/music",    1,    8),
    BLOCK("/home/sam/.script/bar/update",    1000,    1),
    BLOCK("/home/sam/.script/bar/note/notescript",    2,    1),
    BLOCK("/home/sam/.script/bar/wifi",    1,    1),
    BLOCK("/home/sam/.script/bar/weatherdir/weather",    1800,    1),
    BLOCK("/home/sam/.script/bar/filesys",    25,    1),
    BLOCK("/home/sam/.script/bar/cpu",    2,    1),
    BLOCK("/home/sam/.script/bar/temp",    1,    1),
    BLOCK("/home/sam/.script/bar/memram",    1,    1),
    BLOCK("/home/sam/.script/bar/battery",    1,    1),
    BLOCK("LC_ALL=fr_BE /usr/bin/date '+%A %d/%m %H:%M'",    1,    1),
};
