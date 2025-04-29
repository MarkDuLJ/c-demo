//
//  stack.hpp
//  c++demo
//
//  Created by Mark Du on 2025-04-25.
//

#ifndef stack_hpp
#define stack_hpp

#include <stdio.h>
class MyStack{
private:
  int* data;
  int capacity;
  int top;
  
public:
  MyStack(int size=100);
  ~MyStack();
  
  void push(int value);
  void pop();
  bool isEmpty() const;
  int peek() const;
  int size() const;
};

#endif /* stack_hpp */
