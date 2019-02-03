/*
 * File: SimpleHammer.cpp
 * Author: Ryan Kenney <rgk16b@my.fsu.edu>
 *
 * Created on February 3, 2019, 3:39 PM
*/
#include "SimpleHammer.h"

double SimpleHammer::hit(double armor){
    double damage;
    if (armor < 30)
	damage = hitPoints;
    else
	damage = hitPoints - armor;

    if(damage < 0)
	return 0;
    else
	return damage;
}
