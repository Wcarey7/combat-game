/*********************************************************************
** File Name: Medusa.cpp
** Author: Wade Carey
*********************************************************************/


#include "Medusa.hpp"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;


Medusa::~Medusa() {

}


int Medusa::attack()
{

    int roll = rollDice(attackNum, attackSides);

    cout << "Medusa attacks: " << roll << endl;


    if (roll == 12)
    {
        roll = 100;
        cout << "Medusa uses Glare, turns opponent to stone. ";
    }

    return roll;
}


int Medusa::defend(int attackRoll)
{

    int defenseRoll = rollDice(defenseNum, defenseSides);

    cout << "Medusa Defense roll: " << defenseRoll << endl;

    int roll = attackRoll - defenseRoll;

    cout << "Damage to Medusa: " << roll << endl;

    return roll;
}