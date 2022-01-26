#include<stdio.h>

void input(int *a,int *b,int *c)
{
  printf("Enter three numbers \n");
  scanf("%d%d%d",a,b,c);
}

void cmp(int a,int b,int c,int *large)
{
  if(a>b && a>c)
  *large = a;
  else if (b>c)
  *large = b;
  else 
  *large = c;
}

void output(int a,int b,int c,int large)
{
  printf("The largest of %d %d and %d is %d",a,b,c,large);
}

int main()
{
  int a,b,c,lar;
  input(&a,&b,&c);
  cmp(a,b,c,&lar);
  output(a,b,c,lar);
  return 0;
}