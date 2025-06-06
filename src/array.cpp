#include "array.h"
#include <iostream>
void arrayClear(char arr[][10], int x, int y) {
  for (int i = 0; i < x; i++) {
    for (int n = 0; n < y; n++) {
      arr[i][n] = ' ';
    }
  }
}
void arrayPrint(char arr[][10], int x, int y) {
  for (int i = 0; i < x; i++) {
    for (int n = 0; n < y; n++) {
      std::cout << arr[i][n] << " ";
    }
    std::cout << std::endl;
  }
}
