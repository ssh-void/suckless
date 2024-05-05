static char c000000[]                    = "#c792ea"; // placeholder value

static char normfgcolor[]                = "#959dcb";
static char normbgcolor[]                = "#272a38";
static char normbordercolor[]            = "#292d3e";
static char normfloatcolor[]             = "#272a38";

static char selfgcolor[]                 = "#959dcb";
static char selbgcolor[]                 = "#c792ea";
static char selbordercolor[]             = "#c792ea";
static char selfloatcolor[]              = "#c792ea";

static char titlenormfgcolor[]           = "#959dcb";
static char titlenormbgcolor[]           = "#272a38";
static char titlenormbordercolor[]       = "#292d3e";
static char titlenormfloatcolor[]        = "#272a38";

static char titleselfgcolor[]            = "#c3e88d";
static char titleselbgcolor[]            = "#272a38";
static char titleselbordercolor[]        = "#272a38";
static char titleselfloatcolor[]         = "#c792ea";

static char tagsnormfgcolor[]            = "#959dcb";
static char tagsnormbgcolor[]            = "#272a38";
static char tagsnormbordercolor[]        = "#292d3e";
static char tagsnormfloatcolor[]         = "#272a38";

static char tagsselfgcolor[]             = "#c792ea";
static char tagsselbgcolor[]             = "#292d3e";
static char tagsselbordercolor[]         = "#c792ea";
static char tagsselfloatcolor[]          = "#c792ea";

static char hidnormfgcolor[]             = "#e06c75";
static char hidselfgcolor[]              = "#c792ea";
static char hidnormbgcolor[]             = "#272a38";
static char hidselbgcolor[]              = "#272a38";

static char urgfgcolor[]                 = "#959dcb";
static char urgbgcolor[]                 = "#272a38";
static char urgbordercolor[]             = "#4ABAAF";
static char urgfloatcolor[]              = "#272a38";

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