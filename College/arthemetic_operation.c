#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,div,rem;
    printf("Enter the two numbers");
    scanf("%d %d", &a, &b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    rem=a%b;
    printf("Sum = %d",sum);
    printf("Sub = %d",sub);
    printf("Mul = %d",mul);
    printf("Div = %d",div);
    printf("Rem = %d",rem);
}