#include <Servo.h>

Servo servoA;

Servo servoB;

void setup() {
  servoA.attach(9);
  servoB.attach(10);
  
  servoA.write(180);
  delay(2000);
  servoB.write(180);
  delay(2000);
  servoA.write(-180);
  servoB.write(180);
  delay(4000);
  servoA.write(-180);
  servoB.write(-180);
  delay(3000);
}

void loop() {
  if(analogRead(0) < 500) {
    servoA.write(180);
    servoB.write(-180);
  }
  if(analogRead(0) > 500) {
    servoA.write(0);
    servoB.write(0);
  }
}
