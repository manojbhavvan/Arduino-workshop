const int A_IN = A2;
const int LED = 3;
int analog_value;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analog_value=analogRead(A_IN);
  Serial.print("Analog Value = ");
  Serial.println(analog_value);
  analog_value = analog_value/4;
  analogWrite(LED, analog_value);
}
