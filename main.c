#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int
main(int argc, char **argv)
{
  int i, j;
  bool isCap = false;

  for (i = 1; i < argc; ++i) {
    j = 0;
    while (argv[i][j]) {
      printf("%c", isCap ? toupper(argv[i][j]) : tolower(argv[i][j]));
      isCap = !isCap;
      j++;
    }
    printf(" ");
  }

  return 0;
}
