#include "array.h"
#include <iostream>

// clears the field
void arrayClear(char arr[][y]) {
  for (int i = 0; i < x; i++) {
    for (int n = 0; n < y; n++) {
      arr[i][n] = ' ';
    }
  }
}
// prints the field on to the  screen
void arrayPrint(char arr[][y]) {
  for (int i = 0; i < x; i++) {
    for (int n = 0; n < y; n++) {
      std::cout << arr[i][n] << " ";
    }
    std::cout << std::endl;
  }
}
// generates border around the field
void genBorder(char arr[][y]) {
  for (int i = 0; i < x; i++) {
    arr[i][0] = '_';
    arr[i][y - 1] = '_';
  }
  for (int n = 0; n < y; n++) {
    arr[0][n] = '|';
    arr[x - 1][n] = '|';
  }
}
