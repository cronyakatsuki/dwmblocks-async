#define CMDLENGTH 45
#define DELIMITER " "
/* #define CLICKABLE_BLOCKS */

const Block blocks[] = {
    BLOCK("sb-bluetooth", 5, 0),
    BLOCK("sb-optimus", 0, 0),
    BLOCK("sb-cpu", 4, 0),
    BLOCK("sb-cpu-temp", 4, 0),
    BLOCK("sb-ram", 6, 0),
    BLOCK("sb-disk-space", 1600, 0),
    BLOCK("sb-wifi", 3, 0),
	BLOCK("sb-battery", 8,    0),
	BLOCK("sb-datetime",    30,    0)
};
