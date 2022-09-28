/*********************************************************************
** File Name: Creature.hpp
** Author: Wade Carey
*********************************************************************/

#ifndef PROJECT3_CREATURE_HPP
#define PROJECT3_CREATURE_HPP

#include <ctime>
#include <cstdlib>

class Creature
{

public:
    Creature(int an, int as, int dn, int ds, int a, int s, int l);
    virtual ~Creature();
    int rollDice(int numDice, int numSides);
    virtual int attack() = 0;
    virtual int defend(int attackRoll) = 0;
    virtual void applyDamage(int damage);
    bool isDead();

protected:
    int attackNum;
    int attackSides;
    int defenseNum;
    int defenseSides;
    int armor;
    int strength;
    int lives;
    int seed;

};


#endif //PROJECT3_CREATURE_HPP
