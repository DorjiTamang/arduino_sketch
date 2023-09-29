int MOTOR_PIN = 7;
void setup() {
  pinMode(MOTOR_PIN, OUTPUT);
 

}

void loop() {
  digitalWrite(MOTOR_PIN, LOW);
  delay(0);
  digitalWrite(MOTOR_PIN, HIGH);
  delay(0);
}
