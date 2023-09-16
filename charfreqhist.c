#include <stdio.h>

/* print histogram of character frequencies */
int main()
{
  int c, i, j;
  int character[255];
  for (i = 0; i < 255; i++)
    character[i] = 0;

  while ((c = getchar()) != EOF)
  {
    ++character[c];
  }
  for (i = 0; i < 255; i++)
  {
    if (character[i] > 0)
    {
      printf("%c: ", i);
      for (j = 0; j < character[i]; j++)
        printf("*");
      printf("\n");
    }
  }
  return 0;
}
