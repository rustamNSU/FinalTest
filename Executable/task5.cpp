//
// Created by rustam on 22.05.2020.
//
#include <iostream>
#include "task5.h"
using namespace std;

double f1(double x1, double x2)
{
    return x1 + x2;
}

double f2(double x1, double x2)
{
    return x1 / x2;
}



int main()
{
    auto a1 = multiply_functions(f1, f2)(2.1, 2.1);
    auto a2 = multiply_functions(f1, f2)(2, 2);

    cout << a1 << endl
         << a2 << endl;
    return 0;
}

