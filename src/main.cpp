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
    if (p == 0)
      p = x - 2;
    else if (p == x - 1)
      p = 1;
    else if (q == 0)
      q = y - 2;
    else if (q == y - 1)
      q = 1;
    arr[p][q] = '@';
    arrayPrint(arr);
    arr[p][q] = ' ';
    char c = getch();
    switch (c) {
    case 'w':
      p--;
      break; // Up
    case 's':
      p++;
      break; // Down
    case 'a':
      q--;
      break; // Left
    case 'd':
      q++;
      break; // Right
    case 'q':
      return 0; // Quit
    }
  }
}
