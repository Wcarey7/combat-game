/*********************************************************************
** File Name: inputValidate.cpp
** Author: Wade Carey
*********************************************************************/

#include "inputValidate.hpp"
#include <iostream>
using std::cout;
using std::cin;

int valInRange(int dataValue, int min, int max)
{

    while(dataValue < min || dataValue > max)
    {

        cin.clear();
        cin.ignore(20, '\n');


        cout << "Please enter an integer in range ";
        cout << min << "-" << max << ": ";

        cin >> dataValue;
    }


    return dataValue;
}