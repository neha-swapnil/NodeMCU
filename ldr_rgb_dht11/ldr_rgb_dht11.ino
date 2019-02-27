#include <DHT.h>
#define DHTPIN D1
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
uint8_t temperature, humidity;

void setup() {
  Serial.begin(115200);
dht.begin();
delay(10);
Serial.println();
Serial.println();
pinMode(D5,OUTPUT);
pinMode(D6,OUTPUT);
pinMode(D3,OUTPUT);
}

void loop() {
temperature = dht.readTemperature();
humidity = dht.readHumidity();
delay(500);
Serial.print("Temperature Value is :");
Serial.print(temperature);
Serial.print("C");
Serial.print("  Humidity Value is :");
Serial.print(humidity);
Serial.println("%");  
delay(500);

if(digitalRead(D7)==LOW)
  {
    Serial.println("Bright");
    digitalWrite(D5,HIGH);
  digitalWrite(D6,LOW);
  digitalWrite(D3,LOW);
  }
  else
  {
    Serial.println("Dark");
    digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D3,HIGH);
  }

}
