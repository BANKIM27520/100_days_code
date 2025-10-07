/*Write a program to check if a number is a strong number.*/
#include<stdio.h>
int main()
{
    int n,sum=0,fact=1;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    int m=n;
    while(m>0)
    {
        int ld=m%10;
        for(int i=1;i<=ld;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        fact=1;
        m=m/10;
    }
    if(sum==n)
    {
        printf("THE NUMBER IS A STRONG NUMBER");
    }
    else
    {
        printf("THE NUMBER IS NOT A STRONG NUMBER");
    }
    return 0;
}