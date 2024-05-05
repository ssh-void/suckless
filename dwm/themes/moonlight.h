static char c000000[]                    = "#82aaff"; // placeholder value

static char normfgcolor[]                = "#a9b8e8";
static char normbgcolor[]                = "#1e2030";
static char normbordercolor[]            = "#1e2030";
static char normfloatcolor[]             = "#1e2030";

static char selfgcolor[]                 = "#a9b8e8";
static char selbgcolor[]                 = "#c597f9";
static char selbordercolor[]             = "#c597f9";
static char selfloatcolor[]              = "#c597f9";

static char titlenormfgcolor[]           = "#a9b8e8";
static char titlenormbgcolor[]           = "#1e2030";
static char titlenormbordercolor[]       = "#222436";
static char titlenormfloatcolor[]        = "#1e2030";

static char titleselfgcolor[]            = "#c3e88d";
static char titleselbgcolor[]            = "#1e2030";
static char titleselbordercolor[]        = "#1e2030";
static char titleselfloatcolor[]         = "#c597f9";

static char tagsnormfgcolor[]            = "#a9b8e8";
static char tagsnormbgcolor[]            = "#1e2030";
static char tagsnormbordercolor[]        = "#222436";
static char tagsnormfloatcolor[]         = "#1e2030";

static char tagsselfgcolor[]             = "#82aaff";
static char tagsselbgcolor[]             = "#252734";
static char tagsselbordercolor[]         = "#82aaff";
static char tagsselfloatcolor[]          = "#82aaff";

static char hidnormfgcolor[]             = "#e06c75";
static char hidselfgcolor[]              = "#82aaff";
static char hidnormbgcolor[]             = "#1e2030";
static char hidselbgcolor[]              = "#1e2030";

static char urgfgcolor[]                 = "#a9b8e8";
static char urgbgcolor[]                 = "#1e2030";
static char urgbordercolor[]             = "#4ABAAF";
static char urgfloatcolor[]              = "#1e2030";

static char *colors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { normfgcolor,      normbgcolor,      normbordercolor,      normfloatcolor },
	[SchemeSel]          = { selfgcolor,       selbgcolor,       selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { titlenormfgcolor, titlenormbgcolor, titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { titleselfgcolor,  titleselbgcolor,  titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { tagsnormfgcolor,  tagsnormbgcolor,  tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { tagsselfgcolor,   tagsselbgcolor,   tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { hidnormfgcolor,   hidnormbgcolor,   c000000,              c000000 },
	[SchemeHidSel]       = { hidselfgcolor,    hidselbgcolor,    c000000,              c000000 },
	[SchemeUrg]          = { urgfgcolor,       urgbgcolor,       urgbordercolor,       urgfloatcolor },
    [SchemeTag1]         = { "#ff5370",        "#1e2030",        c000000 },
	[SchemeTag2]         = { "#82aaff",        "#1e2030",        c000000 },
    [SchemeTag3]         = { "#4fd6be",        "#1e2030",	     c000000 },
    [SchemeTag4]         = { "#ffc777",        "#1e2030",	     c000000 },
    [SchemeTag5]         = { "#c597f9",        "#1e2030",        c000000 },
	[SchemeTag6]         = { "#b4c2f0",        "#1e2030",        c000000 },
	[SchemeTag7]         = { "#c3e88d",        "#1e2030",        c000000 },
	/*[SchemeTag8]         = { "#e2e22e",        "#1e2030",        c000000 },
	[SchemeTag9]         = { "#ff995e",        "#1e2030",        c000000 },*/
	[SchemeLayout]       = { "#4fd6be",        "#1e2030",        c000000 },
};

static char *statuscolors[][ColCount] = {
	/*                       fg                bg                    border                float */
	[SchemeNorm]         = { "#ff5370",        tagsnormbordercolor,  normbordercolor,      normfloatcolor },
	[SchemeSel]          = { "#82aaff",        normbgcolor,          selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { "#39D7E5",        tagsnormbordercolor,  titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { "#4ABAAF",        normbgcolor,          titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { "#E0AF68",        tagsnormbordercolor,  tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { "#c597f9",        normbgcolor,          tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { "#7dcfff",        tagsnormbordercolor,  c000000,              c000000 },
	[SchemeHidSel]       = { "#9ec07c",        normbgcolor,          c000000,              c000000 },
	[SchemeUrg]          = { urgfgcolor,       urgbgcolor,           urgbordercolor,       urgfloatcolor },
};