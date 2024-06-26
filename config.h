#define CMDLENGTH 60
#define DELIMITER " | "
/* #define CLICKABLE_BLOCKS */

const Block blocks[] = {
    BLOCK("/home/sam/.local/bin/bar/recording",    1,    1),
    BLOCK("/home/sam/.local/bin/bar/mails",    10,    1),
    BLOCK("/home/sam/.local/bin/bar/music",    1,    8),
    BLOCK("/home/sam/.local/bin/bar/update",    1000,    1),
    BLOCK("/home/sam/.local/bin/bar/note/notescript",    2,    1),
    BLOCK("/home/sam/.local/bin/bar/wifi",    1,    1),
    BLOCK("/home/sam/.local/bin/bar/weatherdir/weather",    1800,    1),
    BLOCK("/home/sam/.local/bin/bar/filesys",    25,    1),
    BLOCK("/home/sam/.local/bin/bar/cpu",    2,    1),
    BLOCK("/home/sam/.local/bin/bar/temp",    1,    1),
    BLOCK("/home/sam/.local/bin/bar/memram",    1,    1),
    BLOCK("/home/sam/.local/bin/bar/battery",    1,    1),
    BLOCK("LC_ALL=fr_BE /usr/bin/date '+%A %d/%m %H:%M'",    1,    1),
};
