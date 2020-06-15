int redPin = 9;
int bright1 = 5;
int bright2 = 15;
int bright3 = 35;
int bright4 = 60;
int bright5 = 125;
int bright6 = 255;
int waitTime = 300;
void setup() {
  // put your setup code here, to run once:
pinMode (redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redPin, bright1);
delay(waitTime);
analogWrite(redPin, bright2);
delay(waitTime);
analogWrite(redPin, bright3);
delay(waitTime);
analogWrite(redPin, bright4);
delay(waitTime);
analogWrite(redPin, bright5);
delay(waitTime);
analogWrite(redPin, bright6);
delay(waitTime);
}
