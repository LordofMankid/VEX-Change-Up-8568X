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
