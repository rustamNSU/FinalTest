//
// Created by rustam on 22.05.2020.
//

#include <iostream>
#include "task4.h"
using namespace std;

int func(int x1, int x2)
{
    return x1 + x2;
}

int main()
{
    auto op1 = [](double x1, double x2)
    {
        return x1 * x2;
    };

    auto a1 = reduce(op1, 1.0, 2.0, 3.0, 4.0);
    auto a2 = reduce(func, 1.0, 2.0, 3.0, 4.0);


    cout << a1 << endl;
    cout << a2 << endl;
    return 0;
}


