#include "vex.h"
#include "Constants.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:
motor LeftFront = (LF, ratio6_1, true); 
motor LeftMiddle = (LM, ratio6_1, true);
motor LeftBack = (LB, ratio6_1, true); 

motor RightFront = (RF, ratio6_1, false);
motor RightMiddle = (RM, ratio6_1, false);
motor RightBack = (RB, ratio6_1, false);

motor imu = (INERTIAL_SENSOR, ratio)

void vexcodeInit( void ) {
  // nothing to initialize
}