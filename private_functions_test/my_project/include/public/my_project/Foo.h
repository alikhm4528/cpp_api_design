class Foo {
public:
    Foo();
private:
    void SetVal(int val);
    int GetVal();

    int val;
    friend class TestFoo;
    FRIEND_TEST(MyClassTest, HasPropertyB);
};