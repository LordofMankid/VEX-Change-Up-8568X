#include "main.h"


/////////////////Helper Functions/////////////////
void setDrive(int yPower, int xPower, int rPower){
  FrontLeft = yPower + xPower + rPower;
  FrontRight = yPower - xPower - rPower;
  BackLeft = yPower - xPower + rPower;
  BackRight = yPower + xPower - rPower;
}
