
#include <stdio.h>

int input()
{
    int num;
    printf("Enter a number \n");
    scanf("%d", &num);
    return num;
}
int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}
void output(int a, int b, int sum) 
{
    printf("The sum of %d and %d is %d \n", a, b, sum);
}
int main()
{
    int num1, num2, sum;
    num1 = input();          
    num2 = input();          
    sum = add(num1, num2);   
    output(num1, num2, sum); 
    return 0;
}