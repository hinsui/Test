 

void setup() {
pinMode(13, OUTPUT);
pinMode(2, INPUT);

}

void loop() {
int LDR_Value = digitalRead(2);

if (LDR_Value <1){
digitalWrite(13,LOW);
Serial.println("LOW");
  
}  
else {
digitalWrite(13,HIGH);
Serial.println("HIGH");
}
delay(10);  
}
