#define LED1 16
#define LED2 17
void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  char ch1;
 ch1 = Serial.read();
  if(ch1 == 'a' ){
    for(int i=0; i<=10 ; i++){
  digitalWrite(LED1,HIGH);
  delay(100);
  digitalWrite(LED1,LOW);
  delay(100);
}Serial.println("LED1 ON");
  }else if(ch1 == 's' ){
    for(int i=0; i<=5 ; i++){
  digitalWrite(LED2,HIGH);
  delay(100);
  digitalWrite(LED2,LOW);
  delay(100);
}Serial.println("LED2 ON");
  }else{
   digitalWrite(LED1, LOW);
//   Serial.println("LED1 OFF");
   digitalWrite(LED2, LOW);
//   Serial.println("LED2 OFF");
  }
}
