/*Write a program to find the product of odd digits of a number.*/
#include<stdio.h>
int main()
{
    int n,prod=1,rem,temp,flag=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        if(rem%2!=0)
        {
            prod=prod*rem;
            flag=1;
        }
        n=n/10;
    }
    if(flag==1)
        printf("THE PRODUCT OF ODD DIGITS IS:%d",prod);
    else
        printf("NO ODD DIGITS PRESENT");
    return 0;
}