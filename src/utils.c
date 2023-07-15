
#include <stdio.h>
#include <string.h>
#include "utils.h"

// size of array
int arraySize (char *array[]) {
  int size = 0;
  
  while (array[size] != NULL) {
    size ++;
  }
  
  return size;
}

// contains
int arrayContains (char array[], char element) {
  for (int i = 0; array[i] != '\0'; i++) {
    if (array[i] == element) {
      return 1;
    }
  }
  return 0;
}