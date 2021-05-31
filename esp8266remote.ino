#include "defines.h"
#include <ESP8266WiFi.h>


WiFiServer server(80);

unsigned long currentTime = millis();
// Previous time
unsigned long previousTime = 0; 
// Define timeout time in milliseconds (example: 2000ms = 2s)
const long timeoutTime = 2000;

void setup() {
  init_ir();
  WiFi.hostname(MY_NAME);
  Serial.begin(115200);  
  WiFi.begin(F(WIFI_NAME), F(WIFI_PASS));
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
  server.begin();
}

void loop(){
  String request;
  char c;
  WiFiClient client = server.available();   // Listen for incoming clients

  if (client) {                             // If a new client connects,
    currentTime = millis();
    previousTime = currentTime;
    while (client.connected() && currentTime - previousTime <= timeoutTime) { // loop while the client's connected
      currentTime = millis();         
      if (client.available()) {
        c = client.read();
        request += c;
        Serial.print(c);
        
        if (request.indexOf("\n\r\n") != -1) {
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println("Connection: close");
            client.println();                  
            client.println(SITE_STR);
            client.println();

            if (request.indexOf("GET /onoff") != -1){
              irblink(onoff, 32);              
            }
            else if (request.indexOf("GET /back") != -1){
              irblink(back, 32);              
            }
            else if (request.indexOf("GET /down") != -1){
              irblink(down, 32);              
            }
            else if (request.indexOf("GET /home") != -1){
              irblink(gohome, 32);              
            }
            else if (request.indexOf("GET /left") != -1){
              irblink(left, 32);              
            }
            else if (request.indexOf("GET /ok") != -1){
              irblink(ok, 32);              
            }
            else if (request.indexOf("GET /right") != -1){
              irblink(right, 32);              
            }
            else if (request.indexOf("GET /up") != -1){
              irblink(up, 32);              
            }
            else if (request.indexOf("GET /voldown") != -1){
              irblink(voldown, 32);              
            }
            else if (request.indexOf("GET /volup") != -1){
              irblink(volup, 32);              
            }
            break;
        }
      }
    }
    client.stop();
  }
}
