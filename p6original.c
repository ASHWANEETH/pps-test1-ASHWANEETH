#include<stdio.h>

int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}

int sum_n(int n)
{
  int sum;
  for(int i = 0;i<n;i++)
  {
    sum = sum + i;
  }
  return sum;
}

void output(int n,int sum)
{
  printf("The sum of the numbers is %d\n",sum);
}

int main()
{
  int n,sum;
  n = input();
  sum = sum_n(n);
  output(n,sum);
  return 0;
}