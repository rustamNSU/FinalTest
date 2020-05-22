#pragma once
#include <cmath>

template<typename T>
bool close_enough(T a, T b)
{
    return a == b;
};

template<>
bool close_enough<float>(float a, float b)
{
    return std::abs(a - b) < 1e-6;
}

template<>
bool close_enough<double>(double a, double b)
{
    return std::abs(a - b) < 1e-15;
}


