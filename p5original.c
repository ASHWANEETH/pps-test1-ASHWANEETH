#include<stdio.h>

void input (int *a,int *b,int *c)
{
  printf("Enter three numbers \n");
  scanf("%d%d%d",a,b,c);
}

void cmp(int a,int b,int c,int *lar)
{
  if(a>b && a>c)
  *lar = a;
  else if (b>a && b>c)
  *lar = b;
  else
  *lar = c;
}

void output(int a,int b,int c,int large)
{
  printf("The largest of %d %d and %d is %d\n",a,b,c,large);
}

int main()
{
  int a,b,c,large;
  input(&a,&b,&c);
  cmp(a,b,c,&large);
  output(a,b,c,large);
  return 0;
}