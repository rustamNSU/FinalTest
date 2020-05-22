//
// Created by rustam on 22.05.2020.
//

#include <iostream>
#include "task3.h"
using namespace std;

int main()
{
    auto a1 = sum1(1.5);
    auto a2 = sum1(1.0, 2.0, 3.0, 4.0);
    cout << a1 << '\n' << a2 << endl;

    auto b1 = sum2(1.0, 2.0, 3.0, 4.0);
    cout << b1 << endl;
    return 0;
}


