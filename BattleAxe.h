/* 
 * File:   BattleAxe.h
 * Author: Ryan Kenney <rgk16b@my.fsu.edu>
 *
 * Created on February 3, 2019, 5:17 PM
 */

#include <string>
#include "Weapon.h"

#ifndef BATTLEAXE_H
#define BATTLEAXE_H


//Creates a weapon with 5 hitpoints that does 1/3 of armor as
//damage, ignoring armor.
class BattleAxe : public Weapon {
public:

    BattleAxe() : Weapon("Battle axe", 5) {}

    virtual ~BattleAxe() {};

    virtual double hit(double armor);
};

#endif

