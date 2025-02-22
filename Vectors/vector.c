#include <stdio.h>
#include <stdlib.h>

void pushBack(int **arr, int *capacity, int element) {
  *capacity += 1;
  int *newPtr = (int *)realloc(*arr, *capacity * sizeof(int));
  *arr = newPtr;
  // free(newPtr);
  *(*arr + *capacity - 1) = element;
}


void pop(int **arr, int *capacity) {
    *capacity-=1;
    int *newPtr = (int *)realloc(*arr, *capacity * sizeof(int));
    *arr = newPtr;
}
void printArr(int *arr, int capacity) {
  for (int i = 0; i < capacity; ++i) {
    printf("%d ", *(arr + i));
  }
}
