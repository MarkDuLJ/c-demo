//
//  pointer.cpp
//  c++demo
//
//  Created by Mark Du on 2025-04-20.
//

#include "pointer.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
// won't increase in main
//void increase(int a){
//   a = a + 1;
//  printf("%d\n a address: %p\n", a, &a);
//}

void increase(int *p){
   *p = *p + 1;
  printf("%d\n a address: %p\n", *p, p);
}
int sum(int A[], int size){ //int A[] means int *A as a pointer
  int t = 0;
  for (int i = 0; i < size; i++) {
    t += *(A + i);// equal t += A[i]
  }
  return  t;
}

void twice(int* A, int size){
  for (int i = 0; i < size; i++) {
    A[i] = 2 * A[i];
  }
}

void print(char* p){
  while (*p != '\0') {
    printf("%c\n",*p);
    p++;
  }
}
void printFixArr(int A[][2][2]){
  for (int i = 0; i < 3; i++) {
    printf("Layer %d:\n", i);
    for (int j = 0; j < 2; j++) {
      printf("Layer %d/%d:\n", i, j);
      for (int k = 0; k < 2; k++) {
        printf("%d\n", A[i][j][k]);
      }
    }
  }
}
 
int add(int a, int b){
  
  printf("a/b address in func add:%p/%p\n", &a,&b);
  return a + b;
}
void A()
{
  printf("Yeah!\n");
}

void B(void (*ptr)()) // function pointer as argument
{
  ptr();// call back function that ptr points to
}
 */

void printArr(int A[], int size){
  for (int i = 0; i < size; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
}


/*add callback funtion, compare 2 integers, return 1 if 1st greater than 2nd, 0 otherwise
void sort(int A[], int n, int (*compare)(int, int)){
  int i,j,temp;
  for(i = 0; i < n; i++){
    printf("Round: %d...\n", i);
    for (j = 0; j < n-1; j++) {
      printf("  comparing %d %d\n", A[j], A[j+1]);
      if(compare(A[j], A[j+1]) > 0){
        printf("  swaping %d %d\n", A[j], A[j+1]);
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
      }
    }
    printf("Current sorting result:\n");
    printArr(A, 6);
  }
  
}

int compare(int a, int b){
  if(a > b) return  -1;
  return 1;
}

void swapInt(char *a, char *b){
  char temp = *a;
  *a = *b;
  *b = temp;
}


void play(int bet){
  
  if (bet > cash) {
    printf("You don't have money at all, pls leave!");
    exit(0);
  }
  
  char Cards[3] = { 'Q', 'A', 'K'};
  printf("shuffling...\n");
  srand(int(time(NULL)));
  for (int i = 0; i < 3; i++) {
    int r = rand() % (i+1);
    swapInt(&Cards[i], &Cards[r]);
    printf("1:%c 2:%c 3:%c\n",Cards[0], Cards[1], Cards[2]); // for debug
  }
  
  int guess;
  printf("Input your guess, position 1,2 or 3\n");
  scanf("%d", &guess);
  if(Cards[guess - 1] == 'Q'){
    cash += 3*bet;
    printf("You WIN!Ear $%d this time, you have total $%d now.\n", 3*bet, cash);
  }else{
    cash -= bet;
    printf("Unlucky!You lose $%d this time, you have total $%d now.\n", bet, cash);
  }
  
}

 */
