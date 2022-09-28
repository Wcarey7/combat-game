/*********************************************************************
** File Name: Vampire.cpp
** Author: Wade Carey
*********************************************************************/


#include "Vampire.hpp"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;


Vampire::~Vampire() {

}


int Vampire::attack()
{

    int roll = rollDice(attackNum, attackSides);

    cout << "Vampire attacks: " << roll << endl;

    return roll;
}


int Vampire::defend(int attackRoll)
{
    int roll;


    int charm = (rand() % 2 + 1);

    if (charm == 1)
    {
        if (attackRoll == 100)
        {
            roll = attackRoll;
            cout << "Vampire is turned to stone, cannot charm" << endl;
        }
        else
        {
            cout << "Vampire uses Charm, attack misses" << endl;
            roll = 0;
        }
    }

    else
    {
        int defenseRoll = rollDice(defenseNum, defenseSides);

        cout << "Vampire Defense roll: " << defenseRoll << endl;

        roll = attackRoll - defenseRoll;

        cout << "Damage to Vampire: " << roll << endl;
    }

    return roll;
}