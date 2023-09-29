  #define BUZZER_PIN 11
void setup(){
 pinMode(BUZZER_PIN,OUTPUT);
 tone(BUZZER_PIN,50);
 delay(100);
 noTone(BUZZER_PIN);
}\

 


void loop() {
  tone(BUZZER_PIN,50);
 delay(100);
 noTone(BUZZER_PIN);
  

}
 
