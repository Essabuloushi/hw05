#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>
using namespace std;

/******************************************************************************
 * Vector vector<int> lotto: Vector Lotto
 * ____________________________________________________________________________
 * This Vector takes in two numbers, shuffles them, and returns the amount
 * the user wants back in ascending order.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 *  Two integers must be passed into the Vector.
 * 
 * POST-CONDITION
 *  The first integer will fill the vector and be shuffled and the second 
 *  integer will depict the amount of numbers to be returned.
 * 
 ******************************************************************************/

vector<int> lotto(int totalSpots, int Spots);

/******************************************************************************
 * Method randomNum: function randomNum
 * ____________________________________________________________________________
 * This function takes in a number and returns back a random value from its
 * range.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 *  An integer must be passed into the function
 * 
 * POST-CONDITION
 *  The integer will be modulated and return back a random value using seed
 * rand().
 * 
 ******************************************************************************/

int randomNum(int range);
