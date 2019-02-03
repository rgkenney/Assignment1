/* 
 * File:   CrazyRandomSword.h
 * Author: Ryan Kenney <rgk16b@my.fsu.edu>
 *
 * Created on February 3, 2019, 4:14 PM
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
    //Edit the armor to reduce it by between 2 and 1/3 of armor
    armor -= (rand() % static_cast<int>((armor/3) - 2)) + 2;
    double damage = hitPoints - armor;
    if (damage < 0) {
        return 0;
    }
    return damage;
}
