#include "lotto.h"

int randomNum(int range)
{
    return rand() % range;
}

vector<int> lotto(int totalSpots, int Spots)
{
    vector<int> spots;
    
    for (int i = 0; i < totalSpots; i++)
    {
        spots.push_back(i);
    }
    random_shuffle(spots.begin(), spots.end(), randomNum);
    for (int i = totalSpots; i > Spots;i--)
    {
        spots.pop_back();
    }

    spots.resize(Spots);
    return spots;
}
