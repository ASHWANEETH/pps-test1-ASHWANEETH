#include<stdio.h>

int main()
{
  int a,b,sum;
  input(&a,&b);
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
}
void input(int *a,int *b)
{
  printf("Enter the numbers\n");
  scanf("%d%d",a,b);
}
void add(int a,int b,int *sum)
{
  *sum = a+b;
}
void output(int a,int b,int sum)
{
  printf("The sum of %d an %d is %d",a,b,sum);
}