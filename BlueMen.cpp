/*********************************************************************
** File Name: BlueMen.cpp
** Author: Wade Carey
*********************************************************************/


#include "BlueMen.hpp"
//#include "Die.hpp"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;



BlueMen::~BlueMen() {

}


int BlueMen::attack()
{

    int roll = rollDice(attackNum, attackSides);

    cout << "Blue men attacks:  " << roll << endl;

    return roll;
}


int BlueMen::defend(int attackRoll)
{

    int defenseRoll = rollDice(defenseNum, defenseSides);

    cout << "BlueMen Defense roll: " << defenseRoll << endl;

    int roll = attackRoll - defenseRoll;

    cout << "Damage to Blue Men: " << roll << endl;

    return roll;
}


void BlueMen::applyDamage(int damage)
{
    if ((damage-armor) > 0)
    {
        strength -= (damage - armor);

        cout << "BlueMen Strength points: " << strength << endl;


        if (strength <= 8 && strength > 4)
        {
            defenseNum = 2;
            cout << "BlueMen uses Mob, now they have 2 defense dice" << endl;
        }
        else if (strength <= 4)
        {
            defenseNum = 1;
            cout << "BlueMen uses Mob, now they have 1 defense dice" << endl;

        }
    }
}
