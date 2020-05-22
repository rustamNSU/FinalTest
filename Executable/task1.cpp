//
// Created by rustam on 22.05.2020.
//

#include <iostream>
#include <memory>
#include "task1.h"

int main()
{
    //test std::weak_ptr
    std::shared_ptr<int> r1(new int);
    auto r2 = r1;
    std::cout << "r1.use_count() = " << r1.use_count() << std::endl;
    std::weak_ptr<int> r3 = r1;
    std::cout << "r1.use_count() = " << r1.use_count() << std::endl;
    std::shared_ptr<int> r4 = r3.lock();
    std::cout << "r1.use_count() = " << r1.use_count() << std::endl;
    std::cout << "\n" << "Test my WeakPtr:\n";

    SharedPtr<int> a1(new int);
    auto a2(a1);
    std::cout << "a1.use_count() = " << a1.use_count() << std::endl;
    WeakPtr a3 = a2;
    std::cout << "a1.use_count() = " << a1.use_count() << std::endl;
    SharedPtr a4 = a1;
    std::cout << "a1.use_count() = " << a1.use_count() << std::endl;

    return 0;
}
