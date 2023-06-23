/***************************************************************
*   AUTHOR              : ESSA BULOUSHI
*   Assignemt #5        : Vectors STL
*   Class               : CS1C
*   Section             : Mon-Thurs 3-5:20
*   Due Date            : 06/23/23
****************************************************************/
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "lotto.h"
using namespace std;

//Essa Buloushi			  CS1C    	    			
//
/**************************************************************
 *
 * LOTTERY TICKET
 * ____________________________________________________________
 * This program will gain input of two values that depict 
 * the amount of lottery numbers to choose from, and the numbers
 * chosen to use within the lottery humbers.
 * ____________________________________________________________
 * INPUT
 *  Integer 51 depicts the size of lottery and 6 
 *  signifies 6 random numbers from pool of 51
 * OUTPUT
 * Vector Winners - Outputs the winning loterry numbers
 *
 **************************************************************/

int main()
{

    vector<int> winners = lotto(51, 6); //Passes the size of the lotto, and the range and return the vector to winners.

    cout << "**********************************************************\n";
    cout << "   Programmed by   : Essa Buloushi\n";
    cout << "   CS1C            : Mon-Thurs:3-5:20\n";
    cout << "   HW 05           : STL Vectors\n ";
    cout << "**********************************************************\n";

    cout << "\nPrinting lotto winning results in ascending order: " << endl;

    //Prints lotto results
    for (int i = 0; i < (winners.size()); i++)
    {
        cout << winners[i] << " ";
    }
    cout << "\n";
    return 0;
}
