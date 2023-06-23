#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "lotto.h"
using namespace std;

int main()
{
    vector<int> winners = lotto(51, 6);
    for (int i = 0; i < winners.capacity(); i++)
    {
        cout << winners[i] << " ";
    }
    cout << "Hello" << endl;
    return 0;
}
