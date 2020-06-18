int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;
int ledPin4 = 5;
int waitTime = 2000;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /***********
        0 
   ***********/
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  delay(waitTime);

  /***********
        1 
   ***********/
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  delay(waitTime);

  /***********
        2 
   ***********/
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  delay(waitTime);

   /***********
        3 
   ***********/
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  delay(waitTime);

  /***********
        4 
   ***********/
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  delay(waitTime);

  /***********
        5 
   ***********/
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  delay(waitTime);

  /***********
        6 
   ***********/
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  delay(waitTime);

  /***********
        7 
   ***********/
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  delay(waitTime);

  /***********
        8 
   ***********/
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  delay(waitTime);

  /***********
        9 
   ***********/
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  delay(waitTime);

  /***********
        10 
   ***********/
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  delay(waitTime);

  /***********
        11 
   ***********/
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  delay(waitTime);

  /***********
        12 
   ***********/
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  delay(waitTime);

  /***********
        13 
   ***********/
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  delay(waitTime);

  /***********
        14 
   ***********/
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  delay(waitTime);

  /***********
        15 
   ***********/
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  delay(waitTime);
}
