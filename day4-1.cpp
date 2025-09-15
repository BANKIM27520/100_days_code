/*Write a program to swap two numbers without using a third variable.*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("ENTER THE VALUE OF A:");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUMBER:");
    scanf("%d",&b);
    printf("input are:%d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nTHE SWAPPED VALUES ARE:%d %d",a,b);
    return 0;}