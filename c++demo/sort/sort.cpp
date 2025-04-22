//
//  sort.cpp
//  c++demo
//
//  Created by Mark Du on 2025-04-20.
//

#include "sort.hpp"
#include "../pointer/pointer.hpp"

void selectSort(int A[], int n){
  printf("Current array is:\n");
  printArr(A,n);
  
  for (int i = 0; i< n - 1; i++) {
    int iMin = i;
    printf("iMin is %d now\n", i);
    for (int j = i + 1; j<n; j++) {
      printf("  j is %d, A[j] is %d now\n", j, A[j]);
      if(A[iMin] > A[j]){
        printf("  Since %d > %d, swap\n", A[iMin], A[j]);
        iMin = j;
      }
      int temp = A[i];
      A[i] = A[j];
      A[j] = temp;
      printf("      In inner loop, current array is:");
      printArr(A,n);
      printf("\n");
    }
    printf("Finish %d round...\n", i);
    printf("Current array is:\n");
    printArr(A,n);
  }
  
  printf("Final array is:\n");
  printArr(A,n);
}


void bubbleSort(int A[], int n){
  for (int j = n; j> 0; j--) {
    
    for (int i = 0; i<j; i++) {
      if(A[i] > A[i+1]){
        int temp = A[i];
        A[i] = A[i+1];
        A[i+1] = temp;
      }
      printf("Current array is:\n");
      printArr(A,n);
    }
  }
  printf("Final array is:\n");
  printArr(A,n);
}

void insertSort(int A[], int n){
  for (int i = 1; i < n; i++) {
    int value = A[i];
    printf("Current i: %d, value is %d\n", i, value);
    int hole = i;
    while (hole > 0 && (A[hole-1] > value)) {
      printf("    Since %d in position %d > %d\n", A[hole-1], hole-1,value);
      A[hole] = A[hole-1];
      printf("    Move %d to position %d, hole decrease to %d\n", A[hole-1], hole, hole-1);
      hole--;
    }
    printf("  Assign %d to position %d\n", value, hole);
    A[hole] = value;
    printf("Current array is:");
    printArr(A,n);
    printf("\n");
  }
  
  printf("Final array is:\n");
  printArr(A,n);
}

void merge(int A[], int left, int mid, int right){
  //sizes
  int n1 = mid - left + 1;
  int n2 = right - mid;
  
  //temp arrays
  int L[n1], R[n2];
  
  //copy data to temp arrays
  for (int i = 0; i<n1; i++) L[i] = A[left + i];
  for (int i = 0; i<n1; i++) R[i] = A[mid + 1 + i];
  
  printf("Left array is: ");
  printArr(L, n1);
  printf("righ array is: ");
  printArr(R, n2);
  printf("\n");
  
  // merge back to up level array using 3 pointers
  int i = 0, j = 0, k = left;
  while(i < n1 && j < n2){
    if(L[i] <= R[j]){
      A[k++] = L[i++];
    }else{
      A[k++] = R[j++];
    }
  }
  
  // consider one half already gone
  while(i < n1) A[k++] = L[i++];
  while(j < n2) A[k++] = R[j++];
}


void mergeSort(int A[], int left, int right){
  if(left < right){
    printf("Current status:");
    printArr(A, 8);
    printf("\n");
    int mid = left + (right - left)/2;//avoid overflow
    // recursive
    mergeSort(A, left, mid);
    mergeSort(A, mid + 1, right);//boundary
    
    //use a defined merge func to merge sorted halves
    merge(A,left, mid, right);
  }
  printf("Final result:");
  printArr(A, 8);
  printf("\n");
}
