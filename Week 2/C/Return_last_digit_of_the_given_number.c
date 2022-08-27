// Return last digit of the given number
#include <stdio.h>

int main()
{

  int n, remainder;
  scanf("%d", &n);

  remainder = n % 10;
  if (remainder < 0)
  {
    remainder = -remainder;
  }
  printf("%d", remainder);

  return 0;
}