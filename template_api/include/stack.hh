#include <iostream>
#include <vector>
#include <memory>

template <typename T>
class Stack {
  public:
  void func(T val);
};

template <typename T>
struct Data {
  T first;
  T second;
};
