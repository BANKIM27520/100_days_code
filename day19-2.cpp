/*Write a program to find the sum of digits of a number.*/
#include<stdio.h>
int main()
{
    int n,sum=0,N;
    printf("ENTER THE NUMBER =\t");
    scanf("%d",&n);
    while(n!=0)
    {
        N=n%10;
        sum=sum+N;
        n=n/10;
    }
    printf("THE SUM OF THE NO.= %d",sum);
    return 0;
}