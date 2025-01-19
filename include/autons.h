#pragma once
#include "JAR-Template/drive.h"
#include "Constants.h"

class Drive;

extern Drive chassis;

void first_auton() {
    chassis.set_coordinate(0, 0, 0);
    chassis.drive_to_point(0, 12, 0);
}

void default_constants();

void drive_test();
void turn_test();
void swing_test();
void full_test();
void odom_test();
void tank_odom_test();
void holonomic_odom_test();