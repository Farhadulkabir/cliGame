#include "getch.h"
#include <iostream>
int main() {
  int x, y;
  std::cin >> x >> y;
  char arr[x][y];
  for (int i = 0; i < x; i++) {
    for (int n = 0; n < y; n++) {
      arr[i][n] = ' ';
    }
  }
}
