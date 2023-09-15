#include <stdio.h>

int main()
{
  int c;

  c = getchar() != EOF;
  printf("getchar() != EOF return value = %d\n", c);
  printf("EOF = %d\n", EOF);
  return 1;
}
