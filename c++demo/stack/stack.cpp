//
//  stack.cpp
//  c++demo
//
//  Created by Mark Du on 2025-04-25.
//

#include "stack.hpp"
//array based stack
MyStack::MyStack(int size){
  capacity = size;
  data = new int[capacity];
  top = -1;
}

MyStack::~MyStack(){
  delete [] data;
}

void MyStack::push(int value){
  if(top >= capacity + 1){
    printf("Error: stack overflow\n");
    return;
  }
  data[++top] = value;
}

void MyStack::pop(){
  if(isEmpty()){
    printf("this stack is empty\n");
    return;
  }
  top--;
}

bool MyStack::isEmpty() const{
  if(top == -1){
    return true;
  }else{
    return false;
  }
}

int MyStack::peek() const{
  return data[top];
}

int MyStack::size() const{
  return top + 1;
}
