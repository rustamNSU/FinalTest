#pragma once

template<class...Args>
auto sum1(Args...args);

template<class T>
auto sum1(T t)
{
    return t;
}

template<class T, class...Rest>
auto sum1(T t, Rest...rest)
{
    return t + sum1(rest...);
}


template<class...Args>
auto sum2(Args...args)
{
    return (args + ...);
}



