#include <stdio.h>
#include "vector.h"
#include <stdlib.h>


// Our own vectors:
// pushBack
// pop
// print

int main() {

  int capacity = 4;
  int *arr = (int *)malloc(capacity * sizeof(int));

  for (int i = 0; i < capacity; ++i) {
    *(arr + i) = i + 1;
  }
  printArr(arr, capacity);
  printf("\n");
  pushBack(&arr, &capacity, 5);

  printArr(arr, capacity);
  printf("\n");

  pop(&arr, &capacity);
  printArr(arr, capacity);


  free(arr);
}
