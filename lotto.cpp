#include "lotto.h"

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
int randomNum(int range)
{
    return rand() % range;
}

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
vector<int> lotto(int totalSpots, int Spots)
{
    vector<int> spots;
    
    for (int i = 0; i < totalSpots; i++)    //Loop inputs values for vector using push back and for loop
    {
        spots.push_back(i);
    }
    random_shuffle(spots.begin(), spots.end(), randomNum);  //Random shuffle generator mixed in with randomNum which uses sRand()

    for (int i = totalSpots; i > Spots;i--)
    {
        spots.pop_back();
    }
    spots.reserve(Spots);           //Sets vector capacity = spots
    sort(spots.begin(),spots.end());    //Shorts Vector using library function
    
    return spots;       //Returns vector back to main
}
