#include "main.h"


/////////////////Helper Functions/////////////////

void setDrive(int yPower, int xPower, int rPower){
  FrontLeft = yPower + xPower + rPower;
  FrontRight = yPower - xPower - rPower;
  BackLeft = yPower - xPower + rPower;
  BackRight = yPower + xPower - rPower;
}

void setDriveCoast(){
  FrontLeft.set_brake_mode(MOTOR_BRAKE_COAST);
  FrontRight.set_brake_mode(MOTOR_BRAKE_COAST);
  BackLeft.set_brake_mode(MOTOR_BRAKE_COAST);
  BackRight.set_brake_mode(MOTOR_BRAKE_COAST);
}

void setDriveBrake(){
  FrontLeft.set_brake_mode(MOTOR_BRAKE_BRAKE);
  FrontRight.set_brake_mode(MOTOR_BRAKE_BRAKE);
  BackLeft.set_brake_mode(MOTOR_BRAKE_BRAKE);
  BackRight.set_brake_mode(MOTOR_BRAKE_BRAKE);
}

void setDriveHold(){
  FrontLeft.set_brake_mode(MOTOR_BRAKE_HOLD);
  FrontRight.set_brake_mode(MOTOR_BRAKE_HOLD);
  BackLeft.set_brake_mode(MOTOR_BRAKE_HOLD);
  BackRight.set_brake_mode(MOTOR_BRAKE_HOLD);
}

////////////////////////////////////////////////

void setDriveMotors(){


}
