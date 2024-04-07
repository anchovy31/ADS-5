// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
  T data[size];
  int top;
public:
  Tstack() {
    top = 0;
  }
  void Push(const T& item) {
    if (top <= size - 1)
      data[top++] = item;
    else
      throw string("Full!");
  }
  T Pop() {
    if (top > 0)
      return data[--top];
    else throw string("Empty!");
  }
};
#endif  // INCLUDE_TSTACK_H_
