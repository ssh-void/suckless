static char c000000[]                    = "#82aaff"; // placeholder value

static char normfgcolor[]                = "#959dcb";
static char normbgcolor[]                = "#212432";
static char normbordercolor[]            = "#292d3e";
static char normfloatcolor[]             = "#212432";

static char selfgcolor[]                 = "#959dcb";
static char selbgcolor[]                 = "#82aaff";
static char selbordercolor[]             = "#82aaff";
static char selfloatcolor[]              = "#82aaff";

static char titlenormfgcolor[]           = "#959dcb";
static char titlenormbgcolor[]           = "#212432";
static char titlenormbordercolor[]       = "#292d3e";
static char titlenormfloatcolor[]        = "#212432";

static char titleselfgcolor[]            = "#c3e88d";
static char titleselbgcolor[]            = "#212432";
static char titleselbordercolor[]        = "#212432";
static char titleselfloatcolor[]         = "#82aaff";

static char tagsnormfgcolor[]            = "#959dcb";
static char tagsnormbgcolor[]            = "#212432";
static char tagsnormbordercolor[]        = "#292d3e";
static char tagsnormfloatcolor[]         = "#212432";

static char tagsselfgcolor[]             = "#82aaff";
static char tagsselbgcolor[]             = "#292d3e";
static char tagsselbordercolor[]         = "#82aaff";
static char tagsselfloatcolor[]          = "#82aaff";

static char hidnormfgcolor[]             = "#e06c75";
static char hidselfgcolor[]              = "#82aaff";
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