/*Write a program to check if a number is prime.*/
#include<stdio.h>
int main()
{
    int n,flag=0;
    printf("ENTER THE NUMBER =");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("THE NUMBER IS PRIME");
    else
        printf("THE NUMBER IS NOT PRIME");
    return 0;
}