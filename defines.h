int onoff[] = {0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1};
int back[] = {0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 1};
int down[] = {0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1};
int gohome[] = {0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0};
int left[] = {0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1};
int ok[] = {0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1};
int right[] = {0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1};
int up[] = {0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1};
int voldown[] = {0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1};
int volup[] = {0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1, 1};

#define SHORT_USEC 390 // 562
#define SHORT_USEC_PAUSE 570
#define LONG_USEC_PAUSE 1650
#define FIRST_PULSE_USEC 6590 //9000
#define FIRST_PAUSE_USEC 4420
#define LAST_LONG_PAUSE_USEC1 15000
#define LAST_LONG_PAUSE_USEC2 15000
#define LAST_LONG_PAUSE_USEC3 9500
#define LAST_PULSE_USEC 6550 //9000
#define LAST_PAUSE_USEC 2240
#define FREQUENCY 38

#define IR_PIN 2

#define MY_NAME "PULT"
#define WIFI_NAME "WIFINAME"
#define WIFI_PASS "WIFIPASS"
//#define SITE_STR "<!DOCTYPE html><html><title>PULT</title><head></head><body>bla</body></html>"
#define SITE_STR "<!DOCTYPE html><html><title>PULT</title><head></head><style>.grid-container{display: grid;grid-template-columns: auto auto auto auto;background-color: #2196F3; padding: 20px;width: 95vw;height: 80vh;}.grid-item { text-align: center;}</style><body><div class=\"grid-container\"><div></div><div></div><div></div><button class=onoff onclick=\"goto('/onoff')\">ON/OFF</button><div></div><button class=back onclick=\"goto('/back')\">BACK</button><div></div><button class=home onclick=\"goto('/home')\">HOME</button><button class=volup onclick=\"goto('/volup')\">VOL+</button><div></div><button class=up onclick=\"goto('/up')\">UP</button><div></div><div></div><button class=left onclick=\"goto('/left')\">LEFT</button><button class=select onclick=\"goto('/select')\">SELECT</button><button class=right onclick=\"goto('/right')\">RIGHT</button><button class=voldown onclick=\"goto('/voldown')\">VOL-</button><div></div><button class=down onclick=\"goto('/down')\">DOWN</button><div></div></div><script>function goto(ss) {document.location = ss;}</script></body></html>"
