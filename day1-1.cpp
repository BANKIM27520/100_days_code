/*Write a program to input two numbers and display their sum.*/
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("ENTER THE VALUE OF A:");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B:");
    scanf("%d",&b);
    sum=a+b;
    printf("THE SUM IS:%d",sum);
    return 0;
}