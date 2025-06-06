#include "array.h"
#include "getch.h"
#include <cstdlib>
int main() {
  int p{x / 2}, q{y / 2};
  char arr[x][y];
  while (true) {
    arr[p][q] = '@';
    arrayPrint(arr, x, y);
    arrayClear(arr, x, y);
    char c = getch();
    if (c == 'q') {
      break;
    } else if (c == 'w' && p > 0) {
      system("clear");
      p--;
    } else if (c == 's' && p < x - 1) {
      system("clear");
      p++;
    } else if (c == 'a' && q > 0) {
      system("clear");
      q--;
    } else if (c == 'd' && q < y - 1) {
      system("clear");
      q++;
    }
  }
}
