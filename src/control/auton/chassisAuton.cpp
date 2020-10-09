#include "main.h"

double positionY;
double positionX;
double positionA;

int driveFactor;
bool targetReach;
double KpDrive;
double KdDrive;
double KiDrive;

//
int turnDirection;
int voltageY;
int voltageR;
int voltageX;

double newDistance;
double newAngle;
double targetOrientation;

bool firstCycle = true;
bool atanAdjust = false;
bool turnClockwise = true;
int targetReached;
int driveStep = 0;
int autonDirection;
int limitPass;
position lastPosition;

double lastTargetAngle;
position initialPosition;
double distanceFromInitial;
double initTargetDistance;
double lastOrientation;
double correctionThreshold;

//rectCoord relTarget;
rectCoord absTarget;
rectCoord lastTarget;

/*
void translate(double targetDistance, double targetTheta, double targetOrientation, int maxSpeed){

  if(targetOrientation < 0)
    turnDirection = -1;
  else
    turnDirection = 1;

  // newAngle = targetOrientation + position.angle;  //use if you figure out a way to run this only once

  angleToTarget = targetOrientation - getAngleDeg();

  voltageY = PIDloop(0.75, 0.0, 0.5, cos(-(targetTheta + getAngleDeg()))*targetDistance, position.yPosition);
  voltageX = PIDloop(0.75, 0.0, 0.5, sin(-(targetTheta + getAngleDeg()))*targetDistance, position.xPosition);
  voltageR = PIDloop(0.75, 0.0, 0.5, targetOrientation, getAngleDeg());

  if(abs(voltageY) > maxSpeed)
    voltageY = maxSpeed;
  if(abs(voltageX) > maxSpeed)
    voltageX = maxSpeed;
  if(abs(voltageR) > maxSpeed)
    voltageR = maxSpeed;

  //setDrive(voltageY, voltageX, voltageR);

}*/
