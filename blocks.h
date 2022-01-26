static const Block blocks[] = {
  {"", "~/.scripts/push2talk i3blocks",      10,  11},
  {"", "~/.config/i3blocks/cmus-status",     10,  14},
  {"", "cat ~/.config/i3blocks/asyncblocks", 600, 12},
  {"", "~/.config/i3blocks/mail",            600, 0},
  {"", "/usr/share/i3blocks/temperature",    5,   0},
  {"", "/usr/share/i3blocks/cpu_usage",      5,   0},
  {"", "/usr/share/i3blocks/memory",         5,   0},
  {"", "/usr/share/i3blocks/battery",        30,  0},
  {"", "date +'%d/%m %R'",                   60,  0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
