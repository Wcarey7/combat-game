/*********************************************************************
** File Name: BlueMen.hpp
** Author: Wade Carey
*********************************************************************/

#ifndef PROJECT3_BLUEMEN_HPP
#define PROJECT3_BLUEMEN_HPP


#include "Creature.hpp"

class BlueMen : public Creature
{
public:
    BlueMen() : Creature(2, 10, 3, 6, 3, 12, 1) {

    }
    ~BlueMen();
    virtual int attack();
    virtual int defend(int attackRoll);
    virtual void applyDamage(int damage);
};



#endif //PROJECT3_BLUEMEN_HPP
