/* See LICENSE file for copyright and license details. */
/* appearance */
static const unsigned int borderpx  = 1;        /* border pixel of windows */
static const unsigned int gappx     = 0;        /* gaps between windows */
static const unsigned int snap      = 32;       /* snap pixel */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
static const int splitstatus        = 1;        /* 1 for split status items */
static const char *splitdelim       = ";";       /* Character used for separating status */
static const char *fonts[]          = { "Liberation Mono:size=12" };
static const char dmenufont[]       = "monospace:size=12";
static const char black[]           = "#000000";
static const char dark[]            = "#1d2021";
static const char darkgrey[]        = "#3c3836";
static const char midgrey[]         = "#665c54";
static const char white[]           = "#f6f5f4";
static const char green[]           = "#005577";
static const char darkblue[]        = "#F6F5F4";
static const char col_st[]          = "#1E1E1E"; /*color de vim*/
static const char lightblue[]       = "#83a598";
static const char purple[]          = "#d3869b";
static const char orange[]          = "#fe8019";
static const char red[]             = "#cc241d";
static const char col_gray2[]       = "#ebdbb2";
static const char col_gray3[]       = "#3c3836";
static const char col_red[]         = "#b30000";
static const char col_blak[]        = "#000000";
static const char col_vert[]        = "#32C12C";
static const char col_fuchsia[]     = "#FF00FF";
static const char col_fuchsis[]     = "#EE6397";
static const char col_gray4[]       = "#282828";
static const char col_gray1[]       = "#fdf1c7";
static const char col_cyan[]        = "#fabd2f";
static const char *colors[][4]      = {
	/*              fg(txt)  bg(ar_txt)   border     float */
	[SchemeNorm] = { dark, col_gray2, black, col_gray2},/*non active*/
	[SchemeSel]  = { white, green, orange, col_fuchsia},/*active */
};

static const char *const autostart[] = {
	"st", NULL,
	"slstatus", NULL,
	"sxhkd",NULL,
    "numlockx","on", NULL,
	"brightnessctl","set", "80%", NULL,
	"setxkbmap","-layout","fr", NULL,
	"feh","--bg-fill","/home/sh/1166132.jpg", NULL,
	NULL /* terminate */
};

typedef struct {
	const char *name;
	const void *cmd;
} Sp;
const char *spcmd1[] = {"st", "-n", "spterm", "-g", "90x28", NULL };

static Sp scratchpads[] = {
	/* name          cmd  */
	{"spterm",      spcmd1},
};

/* tagging */
static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class      instance    title       tags mask     isfloating   monitor */
	{ NULL,		  "spterm",		NULL,		SPTAG(0),		1,			 -1 },
	{ NULL,		  "spfm",		NULL,		SPTAG(1),		1,			 -1 },
	{ NULL,		  "keepassxc",	        NULL,		SPTAG(2),		0,			 -1 },
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
};

/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static const char *dmenucmd[] = { "dmenu_run", "-fn", dmenufont, "-nb", col_st, "-nf", white, "-sb",green, "-sf", white, NULL };
static const char *termcmd[]  = { "st", NULL };

static const Key keys[] = {
	/* modifier                     key                  function        argument */
	{ MODKEY,            			XK_s,  	          togglescratch,  {.ui = 0 } },/*scrachpatde */
	{ MODKEY,                       XK_Right,           viewnext,       {0} },/*ayoub*/
	{ MODKEY,                       XK_Left,            viewprev,       {0} },/*ayoub*/
//	{ MODKEY,                       XK_minus,           setgaps,        {.i = -1 } },/*fullgaps*/
//	{ MODKEY,                       XK_equal,           setgaps,        {.i = +1 } },/*fullgaps*/
	{ MODKEY|ShiftMask,             XK_equal,           setgaps,        {.i = 0  } },/*fullgaps*/
	{ MODKEY|ControlMask,           XK_j,               pushdown,       {0} },/*pullnotmaster*/
	{ MODKEY|ControlMask,           XK_k,               pushup,         {0} },
	{ MODKEY,                       XK_p,                spawn,          {.v = dmenucmd } },
	{ MODKEY|ShiftMask,             XK_Return,           spawn,          {.v = termcmd } },
	{ MODKEY,                       XK_b,               togglebar,      {0} },
	{ MODKEY,                       XK_comma,           focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_semicolon,       focusstack,     {.i = -1 } },
	{ ShiftMask|ControlMask,        XK_i,               incnmaster,     {.i = +1 } },
//	{ MODKEY,                       XK_d,               incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,                setmfact,       {.f = -0.03} },
	{ MODKEY,                       XK_l,                setmfact,       {.f = +0.03} },
	{ MODKEY,                       XK_Return,            zoom,              {0} },
	{ MODKEY,                       XK_Tab,               view,              {0} },
	{ MODKEY|ShiftMask,             XK_c,               killclient,          {0} },
//	{ MODKEY,                       XK_t,               setlayout,     {.v = &layouts[0]} },
//	{ MODKEY,                       XK_f,               setlayout,     {.v = &layouts[1]} },
//	{ MODKEY,                       XK_m,               setlayout,     {.v = &layouts[2]} },
	{ MODKEY,                       XK_space,           setlayout,           {0} },
	{ MODKEY|ShiftMask,             XK_space,         togglefloating,        {0} },
//	{ MODKEY,                       XK_agrave,             view,          {.ui = ~0 } },
//	{ MODKEY|ShiftMask,             XK_agrave,              tag,          {.ui = ~0 } },
	{ MODKEY,                       XK_comma,              focusmon,        {.i = -1 } },
	{ MODKEY,                       XK_semicolon,          focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,               tagmon,        {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_semicolon,           tagmon,        {.i = +1 } },
	{ MODKEY|ControlMask|ShiftMask, XK_q,                     quit,           {0} },
	TAGKEYS(                        XK_ampersand,              0)
	TAGKEYS(                        XK_eacute,                 1)
	TAGKEYS(                        XK_quotedbl,               2)
	TAGKEYS(                        XK_apostrophe,             3)
	TAGKEYS(                        XK_parenleft,              4)
	TAGKEYS(                        XK_minus,                  5)
	TAGKEYS(                        XK_egrave,                 6)
	TAGKEYS(                        XK_underscore,             7)
	TAGKEYS(                        XK_ccedilla,               8)
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static const Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button1,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};

