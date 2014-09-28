#include <Stepper.h>
#define Steps 200
Stepper motor(Steps, 8, 9, 10, 11);//declara catidad de pasos y pines en donde se conectan
void setup() {
motor.setSpeed(30);//velocidad en rpm
Serial.begin(9600);

}

void loop() {
int x=0;
  if (Serial.available()){
    x=Serial.read();// se supone que si le ingresas un numero negatrivo gira en sentido contrario
    motor.step(x);
}

}
