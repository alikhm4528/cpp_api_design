#include "stack.hh"

// template <typename T>
// void Stack<T>::Push(T val) {
//  mStack.push_back(val);
//}

// template <typename T>
// T Stack<T>::Pop() {
//  T val = mStack.front();
//  mStack.pop_back();
//  return val;
//}

// template <typename T>
// bool Stack<T>::IsEmpty() const {
//  return mStack.empty();
//}

template <typename T>
void Stack<T>::func(T val) {
  std::cout << "func " << val << std::endl;
}

template void Stack<int>::func(int val);
template void Stack<double>::func(double val);
