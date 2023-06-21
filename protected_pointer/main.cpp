#include <iostream>
// #define protected public
#include "foo.h"
// #undef protected

int main() {
    Bar bar;
    MyFoo my_foo;
    bar.SetFoo((Foo*)&my_foo);
    for(int i = 0; i < 10; i++) {
        std::cout << my_foo.GetTarget()[i] << std::endl;
    }
    return 0;
}