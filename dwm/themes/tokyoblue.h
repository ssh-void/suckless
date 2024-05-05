static char c000000[]                    = "#7AA2F7"; // placeholder value

static char normfgcolor[]                = "#a9b1d6";
static char normbgcolor[]                = "#1a1b26";
static char normbordercolor[]            = "#252734";
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
static char tagsselbgcolor[]             = "#252734";
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
    [SchemeTag1]         = { "#F7768E",        "#1a1b26",        c000000 },
	[SchemeTag2]         = { "#7AA2F7",        "#1a1b26",        c000000 },
    [SchemeTag3]         = { "#4fd6be",        "#1a1b26",	     c000000 },
    [SchemeTag4]         = { "#ffc777",        "#1a1b26",	     c000000 },
    [SchemeTag5]         = { "#9a7ecc",        "#1a1b26",        c000000 },
	[SchemeTag6]         = { "#7a88cf",        "#1a1b26",        c000000 },
	[SchemeTag7]         = { "#9ECE6A",        "#1a1b26",        c000000 },
	[SchemeTag8]         = { "#e2e22e",        "#1a1b26",        c000000 },
	[SchemeTag9]         = { "#a9b8e8",        "#1a1b26",        c000000 },
	[SchemeLayout]       = { "#4fd6be",        "#1a1b26",        c000000 },
};

static char *statuscolors[][ColCount] = {
	/*                       fg                bg                    border                float */
	[SchemeNorm]         = { "#F7768E",        tagsnormbordercolor,  normbordercolor,      normfloatcolor },
	[SchemeSel]          = { "#7AA2F7",        normbgcolor,          selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { "#39D7E5",        tagsnormbordercolor,  titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { "#4ABAAF",        normbgcolor,          titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { "#E0AF68",        tagsnormbordercolor,  tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { "#9a7ecc",        normbgcolor,          tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { "#7dcfff",        tagsnormbordercolor,  c000000,              c000000 },
	[SchemeHidSel]       = { "#9ec07c",        normbgcolor,          c000000,              c000000 },
	[SchemeUrg]          = { urgfgcolor,       urgbgcolor,           urgbordercolor,       urgfloatcolor },
};