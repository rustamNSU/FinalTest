#pragma once

template<class BinaryOp, class T1, class T2>
auto reduce(BinaryOp Op, T1 t1, T2 t2)
{
    return Op(t1, t2);
}

template<class BinaryOp, class T, class...Args>
auto reduce(BinaryOp Op, T t, Args...args)
{
    return Op(t, reduce(Op, args...));
}



