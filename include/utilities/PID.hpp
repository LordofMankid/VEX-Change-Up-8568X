#include "main.h"

//Created a PID structure, with a double for kP, kI and kD.
typedef struct kPID{
  double kP;
  double kI;
  double kD;
} kPID;

extern kPID forwardPID;
extern kPID adjustPID;
extern kPID turnPID;
/*
Sets values for a kPID structure.

Paramaters:
Structure of type kPID to write to.
  This allows for setting a different kPID for different subsystems
Target kP, kI, kD for this structure.

Returns:
PID structure
*/
kPID createkPID(double kP, double kI, double kD);


/*
Adjusts values for a given kPID.

Parameters:
kPID - the specific PID you want to adjuust
dKp - the adjustment for the kP
dKi - the adjustment for the kI
dKd - the adjustment for the kD

Returns:
Modified PID structure
*/
kPID adjustkPID(kPID kPID, double dKp, double dKi, double dKd);

/////////////////////////////////////////////
//
//PID Functions
//
/////////////////////////////////////////////

/*
Calculates the voltage for the chassis (-127 to 127) given a target and the distance from the target
Used for the drive train ONLY as it takes into account odometry information.

Parameters -
kPID for the drive
double targetDistance - the target distance
double distanceFromTarget - the distance that is left to go

Returns: voltage for the motor
*/
int PIDdrive(kPID kPID, double targetDistance, double distanceFromTarget);

/*
Calculates the voltage for the motor (-127 to 127)

Use for any motor/information
*/
int PIDloop(kPID kPID, double units, double EncoderValue);

/**/
int PIDloop(float Kp, float Ki, float Kd, double units, double EncoderValue);

/**/
int turnLoop(kPID kPID, double units, double EncoderValue);
