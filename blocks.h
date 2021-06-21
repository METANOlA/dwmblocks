//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
    {"   ", "$HOME/.local/bin/scripts/kernel",		    360,		        2},

	{"   ", "$HOME/.local/bin/scripts/upt",		        60,		            2},

	{"   ", "$HOME/.local/bin/scripts/pacupdate",		360,		        9},
	
	{"   ", "$HOME/.local/bin/scripts/memory",	        6,		            1},

	{"   ", "$HOME/.local/bin/scripts/volume",			2,		            10},

	{"   ", "$HOME/.local/bin/scripts/clock",			5,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
