/*
 * File: SimpleHammer.h
 * Author: Ryan Kenney <rgk16b@my.fsu.edu>
 *
 * Created on February 3, 2019, 3:33 PM
*/

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

//Creates a Simple Hammer (hitpoint = 25, ignores armor if < 30)
class SimpleHammer : public Weapon{
public:
    SimpleHammer() : Weapon("Simple hammer", 25.0) {}

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);
};

#endif
