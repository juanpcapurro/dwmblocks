static const Block blocks[] = {
  {"",   "~/.scripts/push2talk i3blocks",  10,  11},
  {"",   "~/.config/i3blocks/cmus-status",  10,  14},
  {"",   "~/.config/i3blocks/mail",         600, 0},
  {"",   "/usr/share/i3blocks/temperature", 5,   0},
  {"",   "/usr/share/i3blocks/cpu_usage",   5,   0},
  {"",   "/usr/share/i3blocks/memory",      5,   0},
  {"",   "/usr/share/i3blocks/battery",     30,  0},
  {"",   "date +'%d/%m %R'",                60,  0},
  /* {"", "~/.config/i3blocks/gas",  600,    0}, */
  /* {"BTC:", "curl -s http://api.coindesk.com/v1/bpi/currentprice.json |jq -r '.bpi.USD.rate' |grep -o '^[^.]*'",  600,    0}, */
  /* {"U$:", "w3m preciodolarblue.com.ar | grep Compra -A 1 |tail -n 1|cut -f 1 -d ' '",  600,    0}, */
  /* {"", "~/.config/i3blocks/instagram",  600,    0}, */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
