#pragma once

template<class A, class B>
auto multiply_functions(A f1, B f2)
{
    return [f1, f2](auto x1, auto x2){return f1(x1, x2) * f2(x1, x2);};
}




