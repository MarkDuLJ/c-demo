//
//  linked_list.cpp
//  c++demo
//
//  Created by Mark Du on 2025-04-22.
//

#include "stdlib.h"
#include "linked_list.hpp"

void traverse(Node* A){
  while (A != nullptr) {
    printf("%d ", A->data);
    A = A->next;
  }
  printf("\n");
}

Node* insertAtBegin(Node* A, int value){
  Node* temp = new Node{value, nullptr};
  temp->next = A;
  return temp;
}

Node* insertAtN(Node* A, int position, int value){
  Node* temp = new Node{value, nullptr};
  if(position == 0){
    temp->next = A;
    return temp;//new head
  }
  
  Node* current = A;//**keep the original pointer**
  int i = 0;
  while (current != nullptr && i++ < position - 1) {
    current = current->next;
  }
  
  if(current == nullptr){//check position over the list length
    delete temp;
    return A;
  }

  temp->next = current->next;
  current->next= temp;
  return A;
}

Node* deleteAtN(Node* A, int position){
  Node* current = A;
  if(position == 1){
    A = current->next;
    free(current);
    return A;
  }
  
  int i;
  for (i = 0; i < position-2; i++) {
    current = current->next;
  }
  if(current == nullptr) return A;
  Node* temp = current->next;
  current->next = temp->next;
  delete temp;
//  current = current->next;
  return A;
}

Node* reverse(Node* A){
  
  /**
   Recursive version
   */
  //basic case
  if(A == nullptr || A->next == nullptr){
    return A;
  }
  
  // recurse if list length > 1
  Node* newHead = reverse(A->next);
  
  //real logic here
  A->next->next = A;
  A->next = nullptr;
  
  return newHead;
  
  
  /**
   
   In place reverse, no new node allocated.
  Node* prev = nullptr;
  Node* current = A;
  Node* next = nullptr;
  
  while (current != nullptr) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  
  return prev;
   */
  
  /**
   regular version
  Node* temp = nullptr;
  Node* current = A;
  while(current != nullptr){
    temp = insertAtBegin(temp, current->data);
    current = current->next;
  }
  return temp;
   */
}

void printRecursive(Node* A){
  if(A == nullptr) {
    printf("\n");
    return;
  }
  
  printf("%d ", A->data);
  printRecursive(A->next);
}

void printReverse(Node* A){
  if(A == nullptr) return;
  printReverse(A->next);
  printf("%d ", A->data);
}


DNode* insertDAtBegin(DNode* A, int value){
  DNode* temp = new DNode{A, value, nullptr};
  temp->next = A;
  return temp;
}

DNode* insertDAtTail(DNode* A, int value){
  if (A == nullptr) {
      return new DNode{nullptr, value, nullptr};
    }
  
  DNode* current = A;
  while (current->next != nullptr) {
    current = current->next;
  }
  DNode* node = new DNode{current, value, nullptr};
  current->next = node;
  return A;
}
