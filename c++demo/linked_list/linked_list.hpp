//
//  linked_list.hpp
//  c++demo
//
//  Created by Mark Du on 2025-04-22.
//

#ifndef linked_list_hpp
#define linked_list_hpp

#include <stdio.h>
struct Node {
  int data;
  struct Node* next;
  
//  Node(int d, Node* n) : data(d), next(n) {}
};

struct DNode {
  struct DNode* prev;
  int data;
  struct DNode* next;
};

void traverse(Node* A);
Node* insertAtBegin(Node* A, int value);
Node* insertAtN(Node* A, int position, int value);
Node* deleteAtN(Node* A, int position);
Node* reverse(Node* A);
void printRecursive(Node* A);
void printReverse(Node* A);

DNode* insertDAtBegin(DNode* A, int value);
DNode* insertDAtTail(DNode* A, int value);

#endif /* linked_list_hpp */
