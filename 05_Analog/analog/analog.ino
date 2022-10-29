const int A_IN = A2;
const int LED_PIN = 2;
int analog_value;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analog_value=analogRead(A_IN);
  if(analog_value>500){
    digitalWrite(LED_PIN, LOW);
  }
  else
  {
    digitalWrite(LED_PIN, HIGH);
  }

  //Serial.print("Analog Value = ");
  //Serial.println(analog_value);
}
