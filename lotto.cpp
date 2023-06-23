#include <stdio.h>
#include "lotto.h"

vector<int> lotto(int totalSpots, int Spots)
{
    //unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    vector<int>spots;
    spots.resize(totalSpots);
    
    for (int i = 0; i < totalSpots; i++)
    {
        spots.push_back(i);
    }
    shuffle(spots.begin(),spots.end(),random);

    // return spots[0] << " " << spots[1] << " " << spots[2] << " "<< spots[3] << " "<< spots[4] << " " << spots[5] << endl;
    return spots; 
    // << spots[1] << spots[2] << spots[3] << spots[4] << spots[5];

}

int randomNum(int range)
{
    return rand() % range;
}
