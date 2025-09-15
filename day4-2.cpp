/*Write a program to find and display the sum of the first n natural numbers.*/
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("ENTER THE VALUE OF N:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("THE SUM OF FIRST %d NATURAL NUMBERS IS:%d",n,sum);
    return 0;
}