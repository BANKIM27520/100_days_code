/*Write a program to reverse a given number.*/
#include<stdio.h>
int main()
{
    int n,sum=0,N;
    printf("ENTER THE NUMBER =\t");
    scanf("%d",&n);
    while(n!=0)
    {
        N=n%10;
        sum=sum*10+N;
        n=n/10;
    }
    printf("THE REVERSE OF THE NO.= %d",sum);
    return 0;
}