const int LED_PIN = 2;
void setup() {
  // put your setup code here, to run once:
  // serial.begin(baudRate); Initialize Baud Rate
  pinMode(LED_PIN, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN, HIGH);
  //for(i=0;i<2000;i++);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
