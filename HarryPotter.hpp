/*********************************************************************
** File Name: HarryPotter.hpp
** Author: Wade Carey
*********************************************************************/

#ifndef PROJECT3_HARRYPOTTER_HPP
#define PROJECT3_HARRYPOTTER_HPP


#include "Creature.hpp"

class HarryPotter : public Creature
{
public:
    HarryPotter() : Creature(2, 6, 2, 6, 0, 10, 2)
    {
    }
    ~HarryPotter();
    virtual int attack();
    virtual int defend(int attackRoll);
};


#endif //PROJECT3_HARRYPOTTER_HPP
