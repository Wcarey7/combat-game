/*********************************************************************
** File Name: Vampire.hpp
** Author: Wade Carey
*********************************************************************/

#ifndef PROJECT3_VAMPIRE_HPP
#define PROJECT3_VAMPIRE_HPP


#include "Creature.hpp"

class Vampire : public Creature
{
public:
    Vampire() : Creature (1, 12, 1, 6, 1, 18, 1)
    {
    }
    ~Vampire();
    virtual int attack();
    virtual int defend(int attackRoll);
};



#endif //PROJECT3_VAMPIRE_HPP
