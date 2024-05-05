static char c000000[]                    = "#7AA2F7"; // placeholder value

static char normfgcolor[]                = "#a9b1d6";
static char normbgcolor[]                = "#1a1b26";
static char normbordercolor[]            = "#262937";
static char normfloatcolor[]             = "#1a1b26";

static char selfgcolor[]                 = "#a9b1d6";
static char selbgcolor[]                 = "#7AA2F7";
static char selbordercolor[]             = "#7AA2F7";
static char selfloatcolor[]              = "#7AA2F7";

static char titlenormfgcolor[]           = "#a9b1d6";
static char titlenormbgcolor[]           = "#1a1b26";
static char titlenormbordercolor[]       = "#262937";
static char titlenormfloatcolor[]        = "#1a1b26";

static char titleselfgcolor[]            = "#9ECE6A";
static char titleselbgcolor[]            = "#1a1b26";
static char titleselbordercolor[]        = "#1a1b26";
static char titleselfloatcolor[]         = "#9a7ecc";

static char tagsnormfgcolor[]            = "#a9b1d6";
static char tagsnormbgcolor[]            = "#1a1b26";
static char tagsnormbordercolor[]        = "#262937";
static char tagsnormfloatcolor[]         = "#1a1b26";

static char tagsselfgcolor[]             = "#7AA2F7";
static char tagsselbgcolor[]             = "#262937";
static char tagsselbordercolor[]         = "#7AA2F7";
static char tagsselfloatcolor[]          = "#7AA2F7";

static char hidnormfgcolor[]             = "#e06c75";
static char hidselfgcolor[]              = "#7AA2F7";
static char hidnormbgcolor[]             = "#1a1b26";
static char hidselbgcolor[]              = "#1a1b26";

static char urgfgcolor[]                 = "#a9b1d6";
static char urgbgcolor[]                 = "#1a1b26";
static char urgbordercolor[]             = "#4ABAAF";
static char urgfloatcolor[]              = "#1a1b26";

static char *statuscolors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { normbgcolor,    "#F7768E",          normbordercolor,      normfloatcolor },
	[SchemeSel]          = { normbgcolor,    "#7AA2F7",          selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { normbgcolor,    "#39D7E5",          titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { normbgcolor,    "#4ABAAF",          titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { normbgcolor,    "#E0AF68",          tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { normbgcolor,    "#9a7ecc",          tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { normbgcolor,    "#7dcfff",          c000000,              c000000 },
	[SchemeHidSel]       = { normbgcolor,    "#9ec07c",          c000000,              c000000 },
	[SchemeUrg]          = { urgfgcolor,       urgbgcolor,       urgbordercolor,       urgfloatcolor },
};