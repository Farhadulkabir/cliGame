#include "array.h"
#include "getch.h"
#include <iostream>
int main() {
  int p{x / 2}, q{y / 2};
  char arr[x][y];
  while (true) {
    arr[p][q] = '@';
    std::cout << "\033[2J\033[H";
    arrayPrint(arr, x, y);
    arrayClear(arr, x, y);
    char c = getch();
    if (c == 'q') {
      break;
    } else if (c == 'w' && p > 0) {
      p--;
    } else if (c == 's' && p < x - 1) {
      p++;
    } else if (c == 'a' && q > 0) {
      q--;
    } else if (c == 'd' && q < y - 1) {
      q++;
    }
  }
}
