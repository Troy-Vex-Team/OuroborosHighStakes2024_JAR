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
motor LeftFront = (1, ratio6_1, true); 
motor LeftMiddle = (2, ratio6_1, true);
motor LeftBack = (3, ratio6_1, true); 

motor RightFront = (8, ratio6_1, false);
motor RightMiddle = (9, ratio6_1, false);
motor RightBack = (10, ratio6_1, false);

void vexcodeInit( void ) {
  // nothing to initialize
}