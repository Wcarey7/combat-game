/*********************************************************************
** File Name: main.cpp
** Author: Wade Carey
*********************************************************************/

#include <iostream>
#include <iomanip>
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "HarryPotter.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "inputValidate.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::fixed;
using std::showpoint;
using std::setprecision;

using namespace std;


void gameMenu();
void creatureMenu();
Creature* selectCreature(int creatureChoice);
int menuSelection(int max);
int roundNum =0;

int main()
{

    Creature *opponent1, *opponent2;


    bool stillPlaying = true;
    int fighter;
    int choice;


    do
    {
        //prompt user to choose opponent1
        cout << endl << "Choose your first opponent." << endl;


        creatureMenu();


        fighter = menuSelection(5);
        cin.ignore();

        //create desired fighter and assign as opponent1
        opponent1 = selectCreature(fighter);


        cout << "Choose your second opponent." << endl;


        creatureMenu();


        fighter = menuSelection(5);
        cin.ignore();

        //create desired fighter and assign as opponent2
        opponent2 = selectCreature(fighter);



        bool doneFighting = false;


        do
        {
            roundNum++;
            cout << "Round: " << roundNum << endl << endl;

            int attack = opponent1->attack();

            int damage = opponent2->defend(attack);


            opponent2->applyDamage(damage);


            doneFighting = opponent2->isDead();
//ADD ROUND RESULTS

            if(doneFighting)
            {
                cout << endl << "GAME OVER" << endl;
                cout << "Opponent 1 is the winner." << endl << endl;
            }


            if(!doneFighting)
            {

                attack = opponent2->attack();


                damage = opponent1->defend(attack);


                opponent1->applyDamage(damage);


                doneFighting = opponent1->isDead();


                if(doneFighting)
                {
                    cout << endl << "GAME OVER" << endl;
                    cout << "Opponent 2 is the winner." << endl << endl;
                }
            }



        }while (!doneFighting);


        delete opponent1;
        delete opponent2;


        gameMenu();
        choice = menuSelection(2);


        if (choice == 2)
            stillPlaying = false;

    }while (stillPlaying);

    return 0;
}



void gameMenu()
{
    //display the menu
    cout << "Do you want to play again? Select option 1 or 2" << endl;
    cout << "1. play again" << endl;
    cout << "2. Exit the program" << endl << endl;
}


int menuSelection(int max)
{
    int select;
    cin >> select;

    return valInRange(select, 1, max);
}


void creatureMenu()
{
    //display the menu
    cout << "Select from the following options:" << endl;
    cout << "1. Vampire" << endl;
    cout << "2. Barbarian" << endl;
    cout << "3. Blue Men" << endl;
    cout << "4. Medusa" << endl;
    cout << "5. Harry Potter" << endl << endl;
}


Creature* selectCreature(int creatureChoice)
{
    Creature* chosenFighter;

    switch(creatureChoice)
    {
        case 1:
        {
            chosenFighter = new Vampire;
            break;
        }

        case 2:
        {
            chosenFighter = new Barbarian;
            break;
        }

        case 3:
        {
            chosenFighter = new BlueMen;
            break;
        }

        case 4:
        {
            chosenFighter = new Medusa;
            break;
        }

        case 5:
        {
            chosenFighter = new HarryPotter;
            break;
        }
    }

    return chosenFighter;
}
