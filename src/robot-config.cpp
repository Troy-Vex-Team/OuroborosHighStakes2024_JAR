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

// Left Motors:
motor LeftFront = (1, ratio6_1, true); 
motor LeftMiddle = (2, ratio6_1, true);
motor LeftBack = (3, ratio6_1, true); 

// Right Motors: 
motor RightFront = (8, ratio6_1, false);
motor RightMiddle = (9, ratio6_1, false);
motor RightBack = (10, ratio6_1, false);

// Other Motors:
motor intake = (6, ratio6_1, false);
motor elevator = (7, ratio2_1, false);

//Pneumatics
pros::adi::Pneumatics mogomech('a', false);
pros::adi::Pneumatics doinker('b',false);

void vexcodeInit( void ) {
  // nothing to initialize
}