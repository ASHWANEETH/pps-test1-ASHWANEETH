#include<stdio.h>
int input()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a, int b, int c)
{
  if (a>b && a>c)
  return 1;
  if (b>a && b>c)
  return 2;
  if (c>a && c>b)
  return 3;
}
void output(int a, int b,int c,int largest)
{
 if(largest == 1)
    printf("The largest number is %d\n",a);
 else if(largest == 2)
    printf("The largest number is %d\n",b);
 else if(largest == 3)
    printf("The largest number is %d\n",c);
}

int main()
{
  int a,b,c,large;
  a = input();
  b = input();
  c = input();
  large = cmp(a,b,c);
  output(a,b,c,large);
  return 0;
}
