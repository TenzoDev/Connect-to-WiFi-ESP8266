/*---------------------Connect Arduino to WiFi--------------------------
 *-------------Connect Arduino to WiFi using ESP8266-01 Module---------- 
 *------------------------------TENZO-----------------------------------
*/
#include <WiFiEsp.h>
#include <SoftwareSerial.h>

SoftwareSerial Serial1(2,3); // RX, TX

//-------- your wifi -----------
const char* ssid = "your-wifi-name";
const char* password = "password-wifi";

void setup() {
    Serial.begin(9600);
    Serial1.begin(115200);
    
    WiFi.init(&Serial1);
    Serial.print("Connecting to "); 
    Serial.print(ssid);
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
      delay(500);
    } 
    Serial.print("WiFi connected, IP address: ");
    Serial.println(WiFi.localIP());
}


void loop() {
}
