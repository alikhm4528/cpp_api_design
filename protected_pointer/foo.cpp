#include "foo.h"

Foo::Foo() {
    target_pointer = new int[10];
    for(int i = 0; i < 10; i++)
        target_pointer[i] = i+1;
}

Foo::~Foo() {
    delete target_pointer;
}

Foo* Bar::GetFoo() {
    return foo;
}

void Bar::SetFoo(Foo* foo) {
    this->foo = foo;
}

int* MyFoo::GetTarget() {
    return target_pointer;
}