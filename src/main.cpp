#include "array.h"
#include "getch.h"
#include <iostream>
int main() {
  int p{x / 2}, q{y / 2};
  char arr[x][y];
  arrayClear(arr);
  genBorder(arr);
  while (true) {
    // clears the screen
    std::cout << "\033[2J\033[H";

    // wraps the character around the field
    if (p == 0)
      p = x - 2;
    else if (p == x - 1)
      p = 1;
    else if (q == 0)
      q = y - 2;
    else if (q == y - 1)
      q = 1;

    // puts character in the field
    arr[p][q] = '@';

    // prints the field
    arrayPrint(arr);

    // removes character trails
    arr[p][q] = ' ';

    // takes input from user
    char c = getch();

    // moves character
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
