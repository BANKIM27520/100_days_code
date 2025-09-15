/*Write a program to calculate the factorial of a number.*/
#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("ENTER THE VALUE OF N:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("THE FACTORIAL IS:%d",fact);
    return 0;
}