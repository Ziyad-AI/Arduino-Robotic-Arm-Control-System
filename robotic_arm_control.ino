#include <Servo.h>

Servo base;
Servo arm;
Servo gripper;

void setup() {
  base.attach(9);
  arm.attach(10);
  gripper.attach(11);
}

void loop() {

  // Base rotation
  for(int i=0; i<=180; i++){
    base.write(i);
    delay(10);
  }
  for(int i=180; i>=0; i--){
    base.write(i);
    delay(10);
  }

  // Arm movement
  for(int i=30; i<=150; i++){
    arm.write(i);
    delay(10);
  }
  for(int i=150; i>=30; i--){
    arm.write(i);
    delay(10);
  }

  // Gripper open/close
  for(int i=0; i<=90; i++){
    gripper.write(i);
    delay(10);
  }
  for(int i=90; i>=0; i--){
    gripper.write(i);
    delay(10);
  }

}
