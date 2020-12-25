/* user and group to drop privileges to */
static const char *user  = "samedamci";
static const char *group = "samedamci";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#6cdb60",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "normbgcolor",       STRING,  &colorname[INIT] },
		{ "selbgcolor",       STRING,  &colorname[INPUT] },
		{ "color1",       STRING,  &colorname[FAILED] },
		/* { "color3",       STRING,  &colorname[CAPS] }, */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-misc-inconsolata-medium-r-normal--0-0-0-0-m-0-iso8859-16";
