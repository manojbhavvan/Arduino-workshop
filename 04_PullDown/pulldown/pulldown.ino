const int LED_PIN = 2;
const int SWITCH = 7;
int swtchstate;
int LEDstate=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  pinMode(SWITCH, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  swtchstate = digitalRead(SWITCH);
  digitalWrite(LED_PIN, LEDstate);
  if(swtchstate==HIGH){
        LEDstate=!LEDstate;
        delay(500);
  }
  //else
  //{
    //digitalWrite(LED_PIN, LOW);
  //}
}
