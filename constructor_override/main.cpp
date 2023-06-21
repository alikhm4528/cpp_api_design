#include <iostream>

void redundant(int a) {

}

#define Foo(a) redundant(a)
#include "main.h"
#undef Foo

class Bar : Foo {
    Bar(int a) {
        
    }
};

int main() {
    return 0;
}