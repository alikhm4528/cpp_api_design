#include <iostream>
#include "singleton.h"
#define private public
#include "monostate.h"
#undef private

int main() {
    // Singleton& instance = Singleton::GetInstance();
    Monostate instance1;
    Monostate instance2;

    std::cout << "instance1 = " << instance1.GetValue() << std::endl;
    std::cout << "instance2 = " << instance2.GetValue() << std::endl;

    instance1.SetValue(11);

    std::cout << "instance1 = " << instance1.GetValue() << std::endl;
    std::cout << "instance2 = " << instance2.GetValue() << std::endl;

    return 0;
}