#include "my_project/Foo.h"
#include <gtest/gtest.h>
#include <iostream>

class TestFoo : public ::testing::Test {
private:
    int a;
protected:
    void SetUp() override {
        Foo foo;
        foo.SetVal(10);
        std::cout << foo.GetVal() << std::endl;
    }
    void TearDown() override {}
    friend some_test;
};

class TestBar : public ::testing::Test {
protected:
    void SetUp() override {}
    void TearDown() override {}
};

TEST_F(TestFoo, some_test) {
    a = 10;
    // Foo foo;
    // foo.SetVal(12);
    // std::cout << foo.GetVal() << std::endl;
}