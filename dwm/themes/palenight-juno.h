static char c000000[]                    = "#00a9a5"; // placeholder value

static char normfgcolor[]                = "#959dcb";
static char normbgcolor[]                = "#212432";
static char normbordercolor[]            = "#292d3e";
static char normfloatcolor[]             = "#212432";

static char selfgcolor[]                 = "#959dcb";
static char selbgcolor[]                 = "#00a9a5";
static char selbordercolor[]             = "#00a9a5";
static char selfloatcolor[]              = "#00a9a5";

static char titlenormfgcolor[]           = "#959dcb";
static char titlenormbgcolor[]           = "#212432";
static char titlenormbordercolor[]       = "#292d3e";
static char titlenormfloatcolor[]        = "#212432";

static char titleselfgcolor[]            = "#c3e88d";
static char titleselbgcolor[]            = "#212432";
static char titleselbordercolor[]        = "#212432";
static char titleselfloatcolor[]         = "#00a9a5";

static char tagsnormfgcolor[]            = "#959dcb";
static char tagsnormbgcolor[]            = "#212432";
static char tagsnormbordercolor[]        = "#292d3e";
static char tagsnormfloatcolor[]         = "#212432";

static char tagsselfgcolor[]             = "#00a9a5";
static char tagsselbgcolor[]             = "#292d3e";
static char tagsselbordercolor[]         = "#00a9a5";
static char tagsselfloatcolor[]          = "#00a9a5";

static char hidnormfgcolor[]             = "#e06c75";
static char hidselfgcolor[]              = "#00a9a5";
static char hidnormbgcolor[]             = "#212432";
static char hidselbgcolor[]              = "#212432";

static char urgfgcolor[]                 = "#959dcb";
static char urgbgcolor[]                 = "#212432";
static char urgbordercolor[]             = "#4ABAAF";
static char urgfloatcolor[]              = "#212432";

static char *statuscolors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { "#f07178",        normbordercolor,  normbordercolor,      normfloatcolor },
	[SchemeSel]          = { "#82aaff",        normbgcolor,      selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { "#89ddff",        normbordercolor,  titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { "#4ABAAF",        normbgcolor,      titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { "#ffcb6b",        normbordercolor,  tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { "#c792ea",        normbgcolor,      tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { "#9cc4ff",        normbordercolor,  c000000,              c000000 },
	[SchemeHidSel]       = { "#c3e88d",        normbgcolor,      c000000,              c000000 },
	[SchemeUrg]          = { urgfgcolor,       urgbgcolor,       urgbordercolor,       urgfloatcolor },
};