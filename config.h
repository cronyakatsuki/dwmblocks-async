#define CMDLENGTH 45
#define DELIMITER " "
/* #define CLICKABLE_BLOCKS */

const Block blocks[] = {
    BLOCK("sb-bluetooth", 5, 0),
    BLOCK("sb-optimus", 0, 0),
    BLOCK("sb-cpu", 8, 0),
    BLOCK("sb-cpu-temp", 15, 0),
    BLOCK("sb-ram", 9, 0),
    BLOCK("sb-disk-space", 1600, 0),
    BLOCK("sb-wifi", 5, 0),
	BLOCK("sb-battery", 10,    0),
	BLOCK("sb-datetime",    30,    0)
};
