static char c000000[]                    = "#bc7ad9"; // placeholder value

static char normfgcolor[]                = "#959dcb";
static char normbgcolor[]                = "#1e222a";
static char normbordercolor[]            = "#282c34";
static char normfloatcolor[]             = "#1e222a";

static char selfgcolor[]                 = "#ffffff";
static char selbgcolor[]                 = "#71abeb";
static char selbordercolor[]             = "#71abeb";
static char selfloatcolor[]              = "#71abeb";

static char titlenormfgcolor[]           = "#959dcb";
static char titlenormbgcolor[]           = "#1e222a";
static char titlenormbordercolor[]       = "#282c34";
static char titlenormfloatcolor[]        = "#1e222a";

static char titleselfgcolor[]            = "#98c379";
static char titleselbgcolor[]            = "#1e222a";
static char titleselbordercolor[]        = "#1e222a";
static char titleselfloatcolor[]         = "#71abeb";

static char tagsnormfgcolor[]            = "#959dcb";
static char tagsnormbgcolor[]            = "#1e222a";
static char tagsnormbordercolor[]        = "#282c34";
static char tagsnormfloatcolor[]         = "#1e222a";

static char tagsselfgcolor[]             = "#71abeb";
static char tagsselbgcolor[]             = "#282c34";
static char tagsselbordercolor[]         = "#71abeb";
static char tagsselfloatcolor[]          = "#71abeb";

static char hidnormfgcolor[]             = "#e06c75";
static char hidselfgcolor[]              = "#71abeb";
static char hidnormbgcolor[]             = "#1e222a";
static char hidselbgcolor[]              = "#1e222a";

static char urgfgcolor[]                 = "#959dcb";
static char urgbgcolor[]                 = "#1e222a";
static char urgbordercolor[]             = "#6bb2c0";
static char urgfloatcolor[]              = "#1e222a";

static char *statuscolors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { "#e06c75",        normbordercolor,  normbordercolor,      normfloatcolor },
	[SchemeSel]          = { "#82aaff",        normbgcolor,      selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { "#39D7E5",        normbordercolor,  titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { "#7EC7A2",        normbgcolor,      titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { "#ebcb8d",        normbordercolor,  tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { "#bc7ad9",        normbgcolor,      tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { "#71abeb",        normbordercolor,  c000000,              c000000 },
	[SchemeHidSel]       = { "#9ec07c",        normbgcolor,      c000000,              c000000 },
	[SchemeUrg]          = { urgfgcolor,       urgbgcolor,       urgbordercolor,       urgfloatcolor },
};