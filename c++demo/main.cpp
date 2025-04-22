#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#include "sort/sort.hpp"

int main(){
  printf("hello\n");
  int a[] = {8,7,6,5,4,3,2,1};
  /**
   sort demo

  selectSort(a, 8); // selection sort

  bubbleSort(a, 8);
  insertSort(a, 8);
   */
  
  mergeSort(a, 0, 7);//right has to be the last index, not length
  
  
  /**
   creat a guess gamble game
  printf("We'll start a game, guess queen in 3 cards, you have $%d when starts\n", cash);
  while (cash > 0 ) {
  int bet;
  printf("How much you wanna put in?\n");
  scanf("%d",&bet);
  play(bet);
  }
  
   */
  
  /**
  void (*p)() = A;
  B(p); // call back, eqauls B(A);
  
  int A[] = {4,3,8,7,9,1};
  
  
  
  sort(A, 6, compare);
  
  
   Pointer can point to data or functions
   function address:
  int (*p)(int, int);//pointer to function
  p = &add;//same as p = add;
  int a = p(5,6);// same as a = (*p)(5,6)
  printf("%d\n", a);
  
   */
  
  /**
  int x=3, y=5;
  printf("x/y address in main add:%p/%p\n", &x,&y);
  int c = add(x, y);//value copied here to function add
  printf("Sum = %d\n",c);
  
  int n;
  printf("Enter the size of array:\n");
  scanf("%d", &n);
  int *A = (int*)malloc(n*sizeof(int));// can't do int A[n], size has to be done before runtime
  
  for (int i = 0; i < n; i++) {
    A[i] = i + 1;
  }
  int *p;
   * pointer and dynamic memory
  p = new int;// same as p = (int*)malloc(sizeof(int))
  
  *p = 10; //assign vale to pointer
  delete  p;//like free p
  
  p = new int[20]; //same as p = (int*)alloca(20*sizeof(int))
  delete [] p;
  
  int a;
  int *p;
  p = (int*)malloc(sizeof(int));
  printf("a address in stack:%p\n", &a);
  printf("p address in heap:%p\n", p);
  free(p);// remove this line, p pointer move from old address in heap to new
  p = (int*)malloc(sizeof(int));
  printf("p address in heap:%p\n", p);
  
   */
  /*
  int B[2][3] = {{1,2,3},{4,5,6}};
  int (*p)[3] = B;
  
  //zb[i][j] = *(B[i] + j) = *(*(B + i) + j)
  printf("%p\n", B);
  printf("%p\n", *B);
  printf("%p\n", B[0]);
  printf("%p\n", &B[0][0]);
  
  int C[3][2][2] = {
    {
      {1,2},
      {3,4},
    },
    {
      {5,6},
      {7,8},
    },
    {
      {9,10},
      {11,12},
    },
  };
  
  printFixArr(C);
  */
  /**
   ****String****
  char c[20] = "hello";
  print(c);
  char c[20];
  c[0] = 'H';
  c[1] = 'I';
  c[2] = '\0';
  printf("%s", c);
  printf("\n");
   */
  /**
  //array as function argument
  int a[] = {1,3,5,7,9};
  int size = sizeof(a)/sizeof(a[0]);
  int total = sum(a,size);// equal sum(&a[0], size)
  printf("size fo array: %d, sum = %d\n",size, total);
  
  twice(&a[0], size);
  for (int i = 0; i < size; i++) {
    printf("%d ", *(a + i));
  }
  printf("\n");
   */
  
  /**
  int a[] = {1,3,5,7,9};
  printf("%p %p\n", a, &a[0]);
   */
  /*
   ***** pointer as function arguments ******
  int a;
  a = 10;
  increase(&a);
  printf("%d\n a address: %p\n", a, &a);
  */
   
  /*
   *** Pointer to Pointer ***
  int a = 10;
  int *p = &a;
  printf("%lu\n address: %p\n", sizeof(p), p);
  int **q;
  q =&p;
  printf("%p\n %p\n", q, *q);
  //redereference
  printf("%d\n", *(*q));
  **q = 20;
  printf("%d\n", a);
  */

  /*
  int a = 1033;
  int *p = &a;
  char b = 'z';
  char *p1;
  p1 = &b;
  printf("P address: %p\n P1 address: %p\n p1value: %i\n", p, p1, *p1);
  p1 =(char *) p; //p1 =p won't work since different type
  printf("P address: %p\n P1 address: %p\n p1value: %i\n, ", p, p1, *p1);
  
  //void pointer - genric pointer
  void *p2;
  printf("void pointer address: %p\n", p2);
  */
  
  /**
  int a = 10;
  int *p;
  
  p = &a;
  printf("p: %p\n", p);
  printf("a address is: %p\n", &a);
  printf("a value is: %d\n", a);
  printf("*p value: %d\n", *p);
  
  int b = 20;
  p = &b; // Or *p = b;
  
  printf("*p repoint to b address: %d\n", *p);
  printf("int size: %zu\n", sizeof(b));
  printf("visit pointer + 1: %p\n", p + 1);
   */
  /**
   int a;
  int *p;
  p = &a;
  a = 5;
  
  printf("%p\n",p);
  printf("%p\n",&a);
  printf("%p\n", &p);
  printf("%d\n", *p);
  *p = 9;
  printf("%d\n", *p);
   */

}

