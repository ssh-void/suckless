static char c000000[]                    = "#819aff"; // placeholder value

static char normfgcolor[]                = "#a9b8e8";
static char normbgcolor[]                = "#1b1d1e";
static char normbordercolor[]            = "#1b1d1e";
static char normfloatcolor[]             = "#1b1d1e";

static char selfgcolor[]                 = "#a9b8e8";
static char selbgcolor[]                 = "#ae81ff";
static char selbordercolor[]             = "#ae81ff";
static char selfloatcolor[]              = "#ae81ff";

static char titlenormfgcolor[]           = "#a9b8e8";
static char titlenormbgcolor[]           = "#1b1d1e";
static char titlenormbordercolor[]       = "#232627";
static char titlenormfloatcolor[]        = "#1b1d1e";

static char titleselfgcolor[]            = "#c3e88d";
static char titleselbgcolor[]            = "#1b1d1e";
static char titleselbordercolor[]        = "#1b1d1e";
static char titleselfloatcolor[]         = "#ae81ff";

static char tagsnormfgcolor[]            = "#a9b8e8";
static char tagsnormbgcolor[]            = "#1b1d1e";
static char tagsnormbordercolor[]        = "#232627";
static char tagsnormfloatcolor[]         = "#1b1d1e";

static char tagsselfgcolor[]             = "#819aff";
static char tagsselbgcolor[]             = "#252734";
static char tagsselbordercolor[]         = "#819aff";
static char tagsselfloatcolor[]          = "#819aff";

static char hidnormfgcolor[]             = "#e06c75";
static char hidselfgcolor[]              = "#819aff";
static char hidnormbgcolor[]             = "#1b1d1e";
static char hidselbgcolor[]              = "#1b1d1e";

static char urgfgcolor[]                 = "#a9b8e8";
static char urgbgcolor[]                 = "#1b1d1e";
static char urgbordercolor[]             = "#66d9ef";
static char urgfloatcolor[]              = "#1b1d1e";

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
    [SchemeTag1]         = { "#f92672",        "#1b1d1e",        c000000 },
	[SchemeTag2]         = { "#819aff",        "#1b1d1e",        c000000 },
    [SchemeTag3]         = { "#66d9ef",        "#1b1d1e",	     c000000 },
    [SchemeTag4]         = { "#ffc777",        "#1b1d1e",	     c000000 },
    [SchemeTag5]         = { "#ae81ff",        "#1b1d1e",        c000000 },
	[SchemeTag6]         = { "#b4c2f0",        "#1b1d1e",        c000000 },
	[SchemeTag7]         = { "#c3e88d",        "#1b1d1e",        c000000 },
	/*[SchemeTag8]         = { "#e2e22e",        "#1b1d1e",        c000000 },
	[SchemeTag9]         = { "#ff995e",        "#1b1d1e",        c000000 },*/
	[SchemeLayout]       = { "#66d9ef",        "#1b1d1e",        c000000 },
};

static char *statuscolors[][ColCount] = {
	/*                       fg                bg                    border                float */
	[SchemeNorm]         = { "#f92672",        tagsnormbordercolor,  normbordercolor,      normfloatcolor },
	[SchemeSel]          = { "#819aff",        normbgcolor,          selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { "#39D7E5",        tagsnormbordercolor,  titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { "#66d9ef",        normbgcolor,          titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { "#E0AF68",        tagsnormbordercolor,  tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { "#ae81ff",        normbgcolor,          tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { "#7dcfff",        tagsnormbordercolor,  c000000,              c000000 },
	[SchemeHidSel]       = { "#9ec07c",        normbgcolor,          c000000,              c000000 },
	[SchemeUrg]          = { urgfgcolor,       urgbgcolor,           urgbordercolor,       urgfloatcolor },
};