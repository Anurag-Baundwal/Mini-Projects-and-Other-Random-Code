#include <stdio.h>

int fun(int n)
{
  printf("%d\n", n);
  if (n > 0)
    return;
  else
    fun(n++);
}

int main()
{
  fun(2);
  return 0;
}
