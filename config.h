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
