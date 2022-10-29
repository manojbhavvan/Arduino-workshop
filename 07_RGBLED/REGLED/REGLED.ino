const int red = 9;
const int green = 10;
const int blue = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Violet
  analogWrite(red, 148);
  analogWrite(green, 0);
  analogWrite(blue, 211);
  delay(400);
  //Indigo
  analogWrite(red, 75);
  analogWrite(green, 0);
  analogWrite(blue, 130);
  delay(400);
  //Blue
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 255);
  delay(400);
  //Green
  analogWrite(red, 0);
  analogWrite(green, 255);
  analogWrite(blue, 0);
  delay(400);
  //Yellow
  analogWrite(red, 255);
  analogWrite(green, 255);
  analogWrite(blue, 0);
  delay(400);
  //Orange
  analogWrite(red, 255);
  analogWrite(green, 127);
  analogWrite(blue, 0);
  delay(400);
  //Red
  analogWrite(red, 255);
  analogWrite(green, 0);
  analogWrite(blue, 0);
  delay(400);
}
