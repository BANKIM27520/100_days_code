/*Write a program to check if a number is a perfect number.*/
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("THE NUMBER IS A PERFECT NUMBER");
    }
    else
    {
        printf("THE NUMBER IS NOT A PERFECT NUMBER");
    }
    return 0;
}