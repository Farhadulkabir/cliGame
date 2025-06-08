#include "array.h"
#include "getch.h"
#include <iostream>
int main() {
  int p{x / 2}, q{y / 2};
  char arr[x][y];
  arrayClear(arr);
  genBorder(arr);
  while (true) {
    std::cout << "\033[2J\033[H";
    arr[p][q] = '@';
    arrayPrint(arr);
    arr[p][q] = ' ';
    char c = getch();

    switch (c) {
    case 'w':
      if (p == 1) {
        p = x - 2;
      } else {
        p--;
      }
      break; // Up
    case 's':
      if (p == x - 2) {
        p = 1;
      } else {
        p++;
      }
      break; // Down
    case 'a':
      if (q == 1) {
        q = y - 2;
      } else {
        q--;
      }
      break; // Left
    case 'd':
      if (q == y - 2) {
        q = 1;
      } else {
        q++;
      }
      break; // Right
    case 'q':
      return 0; // Quit
    }
  }
}
