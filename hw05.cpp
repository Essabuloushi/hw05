#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include "lotto.h"
#include <cstdlib>
using namespace std;

int main()
{
    srand(unsigned(time(0)));
    vector<int> winners;
    winners = lotto(51,6);
    
    return 0;
}