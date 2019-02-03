/* 
 * File:   CrazyRandomSword.h
 * Author: Ryan Kenney <rgk16b@my.fsu.edu>
 *
 * Created on February 3, 2019, 4:05 PM
 */

#include <string>
#include "Weapon.h"
#include <stdlib.h> //srand,rand

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H


//Creates a weapon with hitpoints 7-100 and ignores 2 to a third of armor hit
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy random sword", rand() % 94 + 7) {}

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);
};

#endif
