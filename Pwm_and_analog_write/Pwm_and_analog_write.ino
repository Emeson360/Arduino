int redPin = 9;
int bright1 = 127;
void setup() {
  // put your setup code here, to run once:
pinMode (redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redPin, bright1);
}
