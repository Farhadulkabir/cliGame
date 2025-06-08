#include "array.h"
#include "getch.h"
#include <iostream>
int main() {
  int p{x / 2}, q{y / 2};
  char arr[x][y];
  while (true) {
    std::cout << "\033[2J\033[H";
    arrayClear(arr, x, y);
    arr[p][q] = '@';
    arrayPrint(arr, x, y);
    char c = getch();

    switch (c) {
    case 'w':
      if (p == 0) {
        p = x - 1;
      } else {
        p--;
      }
      break; // Up
    case 's':
      if (p == x - 1) {
        p = 0;
      } else {
        p++;
      }
      break; // Down
    case 'a':
      if (q == 0) {
        q = y - 1;
      } else {
        q--;
      }
      break; // Left
    case 'd':
      if (q == y - 1) {
        q = 0;
      } else {
        q++;
      }
      break; // Right
    case 'q':
      return 0; // Quit
    }
  }
}
