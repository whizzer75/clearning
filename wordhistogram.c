#include <stdio.h>

#define IN  1 /* inside a word */
#define OUT 0 /* outside a word */

/* print histogram of word lengths */
int main()
{
  int c, state, charcount, wordindex, i;
  charcount = wordindex = 0;

  state = OUT;
  while ((c = getchar()) != EOF)
  {
    if (c != ' ' && c != '\n' && c != '\t')
    {
      state = IN;
      ++charcount;
    }
    else if (state == IN && (c == ' ' || c == '\n' || c =='\t'))
    {
      state = OUT;
      printf("%3d: ", wordindex);
      for (i = 0; i < charcount; i++)
        printf("*");
      printf("\n");
      ++wordindex;
      charcount = 0;
    }
  }
  return 0;
}
