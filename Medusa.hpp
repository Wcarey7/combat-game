/*********************************************************************
** File Name: Medusa.hpp
** Author: Wade Carey
*********************************************************************/

#ifndef PROJECT3_MEDUSA_HPP
#define PROJECT3_MEDUSA_HPP


#include "Creature.hpp"

class Medusa : public Creature
{
public:
    Medusa() : Creature(2, 6, 1, 6, 3, 8, 1) {

    }
    ~Medusa();
    virtual int attack();
    virtual int defend(int attackRoll);
};


#endif //PROJECT3_MEDUSA_HPP
