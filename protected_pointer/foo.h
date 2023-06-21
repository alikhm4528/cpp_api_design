#pragma once

class Foo {
public:
    Foo();
    ~Foo();
protected:
    int redundant_1;
    int* target_pointer;
    int redundant_2;
};

class MyFoo : Foo {
public:
    int* GetTarget();
};

class Bar {
public:
    Bar() = default;
    void SetFoo(Foo*);
    Foo* GetFoo();
private:
    Foo* foo;
};