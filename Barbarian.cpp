/*********************************************************************
** File Name: Barbarian.cpp
** Author: Wade Carey
*********************************************************************/


#include "Barbarian.hpp"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;



Barbarian::~Barbarian() {

}

int Barbarian::attack()
{

    int roll = rollDice(attackNum, attackSides);

    cout << "Barbarian attacks: " << roll << endl;

    return roll;
}


int Barbarian::defend(int attackRoll)
{

    int defenseRoll = rollDice(defenseNum, defenseSides);


    cout << "Barbarian Defense roll: " << defenseRoll << endl;


    int roll = attackRoll - defenseRoll;

    cout << "Damage to Barbarian: " << roll << endl;

    return roll;
}
