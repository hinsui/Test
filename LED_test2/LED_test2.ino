#define LED1 16
#define LED2 17
const int LEDR = 18;
const int LEDY = 19;
const int LEDG = 21;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDY, OUTPUT);
  pinMode(LEDR, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LEDR, HIGH);
  digitalWrite(LEDY, LOW);
  digitalWrite(LEDG, LOW);
  delay(250);
  digitalWrite(LEDR, LOW);
  digitalWrite(LEDY, HIGH);
  digitalWrite(LEDG, LOW);
  delay(250);
  digitalWrite(LEDR, LOW);
  digitalWrite(LEDY, LOW);
  digitalWrite(LEDG, HIGH);
  delay(250);
  digitalWrite(LEDR, LOW);
  digitalWrite(LEDY, HIGH);
  digitalWrite(LEDG, LOW);
  delay(250);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LEDR, HIGH);
  digitalWrite(LEDY, LOW);
  digitalWrite(LEDG, LOW);
  delay(250);
  digitalWrite(LEDR, LOW);
  digitalWrite(LEDY, HIGH);
  digitalWrite(LEDG, LOW);
  delay(250);
  digitalWrite(LEDR, LOW);
  digitalWrite(LEDY, LOW);
  digitalWrite(LEDG, HIGH);
  delay(250);
  digitalWrite(LEDR, LOW);
  digitalWrite(LEDY, HIGH);
  digitalWrite(LEDG, LOW);
  delay(250);
}
