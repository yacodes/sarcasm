#include <stdio.h>
#include <ctype.h>
#include <stdbool.h> 

int
main()
{
  int c;
  bool b = false;
  while ((c = getchar()) != EOF)
    putchar((b = !b) ? toupper(c) : tolower(c));
  return 0;
}
