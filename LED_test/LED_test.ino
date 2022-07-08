int LED1 = 32; //active 0
int LED2 = 33; //active 0
int LED3 = 25; //active 1
int LED4 = 26; //active 1
const int Switch1 = 35; //active 1
const int Switch2 = 34; //active 0

void setup() {
  Serial.begin(115200);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(Switch1, INPUT);
  pinMode(Switch2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
 int S1 = digitalRead(Switch1);
 int S2 = digitalRead(Switch2);                                                                                                                                                                                                                                                       
 if (S1 == HIGH){
  ac11();
 }else if (S1 == LOW){
  ac12();
 }
 if (S2 == LOW){
  ac01();
 }else if (S2 == HIGH){
  ac02();
 }
}
 void ac11(){
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  delay(250);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  delay(250);
  }
 void ac12(){
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  delay(1000);
 }
 void ac01(){
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  delay(1000);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(1000);
 }
 void ac02(){
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  delay(1000);
 }
