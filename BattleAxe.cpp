/* 
 * File:   BattleAxe.h
 * Author: Ryan Kenney <rgk16b@my.fsu.edu>
 *
 * Created on February 3, 2019, 5:18 PM
 */

#include "BattleAxe.h"

double BattleAxe::hit(double armor) {
    double damage = hitPoints + static_cast<int>(armor/3);

    return damage;
}
