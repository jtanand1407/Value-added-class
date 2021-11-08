#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char n;
  scanf("%c",&n);
  switch(n)
  {
      case '@':
      {
      printf("@");
      break;
      }
      case '+':
      {
          printf("+");
          break;
      }
      case '#':
      {
          printf("#");
          break;
      }
  }
}