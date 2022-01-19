#include <stdio.h>

int main()
{
  int a=10;
  int *pa;
  pa = &a;
  printf("%d %d",a,*pa);
  return 0;
}
