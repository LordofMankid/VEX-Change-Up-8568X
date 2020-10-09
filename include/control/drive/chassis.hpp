#include "main.h"

////////Helper Functions////////
//////////////////////////////////////////////////

/*

Takes three integer parameters for a holonomic drive, effective from -127 - 127)

1. Power for movement along the Y-axis
2. Power for movement along the X-axis
3. Power for rotation(positive being clockwise)
Yes, they can be combined. No worries about them having to add up to 127
*/
void setDrive(int yPower, int xPower, int rPower);

/*
Sets the drive train motor brakeTypes to coast - used for auton for PID.
*/
void setDriveCoast();
/*
Sets the drive train motor brakeTypes to brake - use for driver control
*/
void setDriveBrake();
/*
Sets the drive train motor brakeTypes to hold(lock in place
*/
//DRIVE FUNCTIONS///

/*
Function to tie the power of the motors to the joysticks.
*/
void setDriveMotors();

/*
Function to reset the positions of the internal motor encoder position to 0 ticks.
Encoder ticks depend on the gearset of the motor, clockwise being positive.
*/
void resetDriveEncoders();
