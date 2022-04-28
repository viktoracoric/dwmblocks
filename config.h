//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	/* {"",	"music",	0,	11},*/
	{"",	"pacpackages",	0,	8},
	{"",	"news",		0,	6},
//	{"",	"crypto",	0,	13},
//	{"",	"price btc Bitcoin 💰",				0,	21},
//	{"",	"price bat \"Basic Attention Token\" 🦁",	0,	20},
//	{"",	"price lbc \"LBRY Token\" 📚",			0,	22},
	{"",	"torrent",	60,	7},
	{"",	"weather",	18000,	5},
//	{"",	"cpu",		10,	18},
//	{"",	"moonphase",	18000,	17},
	{"",	"mailbox",	180,	12},
//	{"",	"nettraf",	1,	16},
	{"",	"volume",	0,	10},
	{"",	"battery",	5,	3},
	{"",	"memory",	10,	14},
	{"",	"clock",	1,	1},
	{"",	"internet",	10,	4},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
