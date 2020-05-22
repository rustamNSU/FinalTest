//
// Created by rustam on 22.05.2020.
//


#include <iostream>
#include <iomanip> // for std::boolalpha
#include "task2.h"
using namespace std;

int main()
{
    auto a1 = close_enough(2.0, 3.0);
    auto a2 = close_enough(3, 3);
    auto a3 = close_enough(1.0f, 1.0000000001f);

    cout << boolalpha;
    cout << a1 << endl
         << a2 << endl
         << a3 << endl;
    return 0;
}