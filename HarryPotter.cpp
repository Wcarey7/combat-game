/*********************************************************************
** File Name: HarryPotter.cpp
** Author: Wade Carey
*********************************************************************/


#include "HarryPotter.hpp"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;


HarryPotter::~HarryPotter() {

}


int HarryPotter::attack()
{

    int roll = rollDice(attackNum, attackSides);

    cout << "Harry Potter attacks: " << roll << endl;

    return roll;
}


int HarryPotter::defend(int attackRoll)
{

    int defenseRoll = rollDice(defenseNum, defenseSides);

    cout << "HarryPotter Defense roll: " << defenseRoll << endl;

    int roll = attackRoll - defenseRoll;

    cout << "Damage to Harry Potter: " << roll << endl;

    return roll;
}
