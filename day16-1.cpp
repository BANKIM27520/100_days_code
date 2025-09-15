/*Write a program to take a number as input and print its equivalent binary representation.*/
#include<stdio.h>
int main()
{
    int n,bin=0,rem,i=1;
    printf("ENTER THE NUMBER =\t");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%2;
        bin=bin+rem*i;
        n=n/2;
        i=i*10;
    }
    printf("THE BINARY REPRESENTATION IS = %d",bin);
    return 0;
}