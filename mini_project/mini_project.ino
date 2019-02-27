#include <DHT.h>
#define DHTPIN D5
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
uint8_t temperature, humidity;
int i;
void setup()
{
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  Serial.begin(115200);
  dht.begin();
  delay(10);
  Serial.println();
  Serial.println();
  
}

void loop()
{
  
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
  if(i==0)
  {
    for(i=0;i<1;i++)
    {
      if(digitalRead(D1)==LOW)
      {
        Serial.println("Bright");
        digitalWrite(D2,HIGH); 
        digitalWrite(D3,LOW);
        delay(1000);
      }
      else
      {
        Serial.println("Dark");
        digitalWrite(D2,LOW); 
        digitalWrite(D3,LOW);
      }
    }
  }
  
  if(temperature>=30)
  {
    digitalWrite(D2,HIGH);
    digitalWrite(D3,LOW);
    delay(5000);
  }
  else
  {
  }
}
