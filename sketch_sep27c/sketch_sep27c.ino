void setup(){
pinMode(LED_BUILTIN,OUTPUT);
}
#define STATUS

const int BLINKING_TIME_MS = 1000;
const int BLINKING_TIME_ON_MS = 1000;
const int BLINKING_TIME_OFF_MS = 1000;
const int status = LOW;



void loop(){
  change_led(BLINKING_TIME_ON_MS = 1000);
  change_led(BLINKING_TIME_OFF_MS = 1000;);

}
void led_on(int time_on){
  digitalWrite(LED_BUILTIN,HIGH);
  delay(time_on);
}
void led_off(int time_off){
  digitalWrite(LED_BUILTIN,LOW);
  delay(time_off);
}


 void change_led(int time_){
  if(LOW == status) {status = HIGH;}
  else{status = LOW;}
  digitalWrite(LED_BUILTIN, staus);
  delay(time_);
 }

 void loop(){}
 int led_status() {
 return status;
 }
