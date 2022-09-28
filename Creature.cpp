/*********************************************************************
** File Name: Creature.cpp
** Author: Wade Carey
*********************************************************************/

#include "Creature.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;



Creature::Creature(int an, int as, int dn, int ds, int a, int s, int l)
{
    attackNum = an;
    attackSides = as;
    defenseNum = dn;
    defenseSides = ds;
    armor = a;
    strength = s;
    lives = l;

    seed = time(0);
    srand(seed);

    cout << "Initial strength score: " << s << endl << endl;
}


Creature::~Creature()
{
}


int Creature::rollDice(int numDice, int numSides)
{
    int rollValue = 0;

    for (int count = 1; count <= numDice; count++)
    {
        rollValue += (rand() % numSides + 1);
    }

    return rollValue;
}


void Creature::applyDamage(int damage)
{
    if ((damage-armor) > 0)
    {
        strength -= (damage - armor);
    }

    cout << "Strength points after damage: " << strength << endl;
}


bool Creature::isDead()
{
    bool gameOver = false;


    if (strength <= 0)
    {
        lives -= 1;

        if (lives == 0)
        {
            gameOver = true;
        }
        else if (lives == 1)
        {
            cout << "HarryPotter uses Hogwarts" << endl;
            strength = 20;
        }
    }

    return gameOver;
}