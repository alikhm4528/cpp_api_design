class Foo {
public:
    Foo(int a) {
        this->a = a;
    }
private:
    int a;
    class Impl;
    Impl* impl;
};
