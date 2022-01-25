#include <stdio.h>

void input(int *pa, int *pb)
{


}

/* When will you use pass by reference */
/* When i am okay with changing value of the actual variable. 

Which line is changing the actual variable 
a and b

*/

int add(int *a,int *b)
{
  int sum=*a+*b;
  return sum;
}




int main()
{
  int a=10;
  int *pa;
  pa = &a;
  printf("%d %d",a,*pa);
  return 0;
}
