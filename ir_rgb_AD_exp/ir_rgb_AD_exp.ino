void setup() {
pinMode(D5,OUTPUT);
pinMode(D7,OUTPUT);
Serial.begin(115200);
}

void loop() {
  
  if(digitalRead(D6)==LOW && analogRead(A0)<=600){
  Serial.println("Obstacle");
  Serial.println(analogRead(A0));
  digitalWrite(D5,HIGH);
  digitalWrite(D7,LOW);
}
else{
  Serial.println("Clear");
  Serial.println(analogRead(A0));
  digitalWrite(D5,LOW);
  digitalWrite(D7,HIGH);
}
delay(100);
}
