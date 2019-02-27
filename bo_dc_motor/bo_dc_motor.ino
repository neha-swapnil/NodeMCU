void setup() {
 pinMode(D1,OUTPUT);
 pinMode(D2,OUTPUT);
pinMode(D5,OUTPUT);
pinMode(D6,OUTPUT);
pinMode(D7,OUTPUT);
pinMode(D8,OUTPUT);
}
void loop() {
  digitalWrite(D1,HIGH); digitalWrite(D2,LOW);
  if(digitalRead(D1)==1){
   digitalWrite(D5,LOW);
  digitalWrite(D6,HIGH);
  digitalWrite(D7,LOW);
  delay(3000);
  }
  digitalWrite(D1,LOW);
  digitalWrite(D2,HIGH);
  if(digitalRead(D2)==1){
  
   digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,HIGH);
  delay(3000);
  }
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  if(digitalRead(D1)==0 && digitalRead(D2)==0){
  digitalWrite(D5,HIGH);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
  digitalWrite(D8,HIGH);
  delay(2000);
  }
}
