#include <ESP8266WiFi.h>

const char *ssid = "NEHA";
const char *password = "0123456789";

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.print("Configuring access point...");
  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);

  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);
}

void loop() {

}
