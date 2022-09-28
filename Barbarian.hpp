/*********************************************************************
** File Name: Barbarian.hpp
** Author: Wade Carey
*********************************************************************/

#ifndef PROJECT3_BARBARIAN_HPP
#define PROJECT3_BARBARIAN_HPP


#include "Creature.hpp"

class Barbarian : public Creature
{
protected:

public:
    Barbarian() : Creature(2, 6, 2, 6, 0, 12, 1) {

    }
    ~Barbarian();
    virtual int attack();
    virtual int defend(int attackRoll);
};


#endif //PROJECT3_BARBARIAN_HPP
