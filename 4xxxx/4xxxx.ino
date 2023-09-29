
/*
      A
     ---
  F |   | B
    | G |
     ---
  E |   | C
    |   |
     ---
      D
//
  This example code is in the public domain.
//
  USE RESISTORS on the SEGMENT wires! (Arduino pins 2 to 8)
*/
//
int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int D1 = 9;
int D2 = 10;
int D3 = 11;
int D4 = 12;
//
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pins as outputs.
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(D1, LOW);  // NOTE that LOW denotes the active DIGIT
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  //0
  digitalWrite(pinA, HIGH);  // NOTE that HIGH denotes an active SEGMENT
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
  delay(1); // wait for one millisecond

  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);  // NOTE that LOW denotes the active digit
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  //1
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);  // NOTE that HIGH denotes an active SEGMENT
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  delay(1); // wait for one millisecond

  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);  // NOTE that LOW denotes the active DIGIT
  digitalWrite(D4, HIGH);
  //2
  digitalWrite(pinA, HIGH);  // NOTE that HIGH denotes an active SEGMENT
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
  delay(1); // wait for one millisecond

  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, LOW);  // NOTE that LOW denotes the active DIGIT
  //3
  digitalWrite(pinA, HIGH);  // NOTE that HIGH denotes an active SEGMENT
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
  delay(1); // wait for one millisecond

  // I've only include digits 0123 – I'm sure if you've got this far you can work out the rest.
}
