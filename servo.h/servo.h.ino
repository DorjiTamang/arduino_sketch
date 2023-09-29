
#include <Servo.h>
Servo si;
void setup(){
si.attach(9);
}

void loop() {
si.detach();
delay(200);
si.attach(9);
si.write(180);
delay(200); 
si.detach();
delay(200);
si.attach(9);
si.write(0);
delay(200);
}
