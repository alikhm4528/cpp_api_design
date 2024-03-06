#include <iostream>

#include "stack.hh"

int main() {
  Stack<int> stack_int;
  stack_int.func(2);
  Stack<double> stack_double;
  stack_double.func(2.5);

  Data<int> data;
  data.first = 2;
  data.second = 4;
  std::cout << "first = " << data.first << ", second = " << data.second << std::endl;
  return 0;
}
