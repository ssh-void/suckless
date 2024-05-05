/* Terminal colors (16 first used in esacpe sequence) */
static const char *colorname[] = {
/* 8 normal colors */
    "#232729",    /*black*/
    "#9c2221",    /*red*/
    "#219c22",    /*green*/
    "#9b9c21",    /*yellow*/
    "#215d9c",    /*blue*/
    "#9c219b",    /*magenta*/
    "#219b9c",    /*cyan*/
    "#eeeeee",    /*white*/

    /* 8 bright colors */
    "#5e5e5e",    /*black*/
    "#d94b4a",    /*red*/
    "#4ad94b",    /*green*/
    "#d8d94a",    /*yellow*/
    "#4a90d9",    /*blue*/
    "#d94ad8",    /*magenta*/
    "#4ad8d9",    /*cyan*/
    "#ffffff",    /*white*/

    [255] = 0,

    /* more colors can be added after 255 to use with DefaultXX */
    "#d94ad8", /* 256 cursor */
    "#5e5e5e", /* 257 rev cursor */
    "#232729", /* 258 bg */
    "#eeeeee", /* 259 fg */
};

/* default colors (colorname index )*/
/* foreground, background, cursor, reverse cursor */
unsigned int defaultfg = 259;
unsigned int defaultbg = 258;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

