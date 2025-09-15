/*Write a program to swap two numbers using a third variable.*/
#include<stdio.h>
int main()
{
    int a,b,t;
    printf("ENTER THE VALUE OF A:");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUMBER:");
    scanf("%d",&b);
    printf("input are:%d %d",a,b);
    t=b;
    b=a;
    a=t;
    printf("\nTHE SWAPPED VALUES ARE:%d %d",a,b);
    return 0;
}