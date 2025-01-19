#ifndef MYLIB_CONSTANTS_H
#define MYLIB_CONSTANTS_H
#include <cmath> // For math constants such as pi

namespace PortConstants
{
  const int LF = 1;
  const int LM = 2;
  const int LB = 3;

  const int RF = 8;
  const int RM = 9;
  const int RB = 10;

  const int INERTIAL_SENSOR = 14;
  const int HORI_ENCODER = 5;
  const int VER_ENCODER = -12;
  const int INTAKE = 6; 
  const int ELEVATOR = 7; 
}

namespace MathConstants 
{
    const double HORI_ENCODER_DISTANCE = 1.00; 
    const double VERT_ENCODER_DISTANCE = 0.25; 
    const int OMNI_WHEEL_DIAMETER = 4;
    const int OMNI_WHEEL_CIRCUMFERENCE = OMNI_WHEEL_DIAMETER * M_PI;


    //PID controller constants
    
}

#endif