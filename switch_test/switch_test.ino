#define LED1 16
#define LED2 17
const int LEDR = 18;
const int LEDY = 19;
const int LEDG = 21;
#define SW1 2
#define SW2 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
  
  
}

void loop() {
 char ch1;
 char ch2;
 ch1 = Serial.read();
 ch2 = Serial.read();
 if(ch1 == 'a' ){
  digitalWrite(LED1, HIGH);
  Serial.println("LED1 ON");
}else if(ch2 =='b'){
  digitalWrite(LED1, LOW);
  Serial.println("LED1 OFF");
}
  
}
