#include "array.h"
#include <iostream>
void arrayClear(char arr[][y]) {
  for (int i = 0; i < x; i++) {
    for (int n = 0; n < y; n++) {
      arr[i][n] = ' ';
    }
  }
}
void arrayPrint(char arr[][y]) {
  for (int i = 0; i < x; i++) {
    for (int n = 0; n < y; n++) {
      std::cout << arr[i][n] << " ";
    }
    std::cout << std::endl;
  }
}
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
