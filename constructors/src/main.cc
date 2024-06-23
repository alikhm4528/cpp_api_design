#include "class_a.hh"
#include <iostream>

int main() {
  A aa;
  const std::string* a = aa.GetMyName();
  std::cout << *a << std::endl;
  int b = 10;
  aa.DoSomething(b);
  // std::string* aaa = (std::string*)(a);
  // aaa->clear();
  // const std::string* b = aa.GetMyName();
  // std::cout << *b << std::endl;
  return 0;
}