/*Write a program to calculate the area and circumference of a circle given its radius.*/
#include<stdio.h>
#define pi 3.14
int main()
{
    double r,area,circum;
    printf("ENTER THE RADIUS OF THE CIRCLE:");
    scanf("%lf",&r);
    area=pi*r*r;
    circum=2*pi*r;
    printf("THE AREA OF CIRCLE IS:%.2lf\n",area);
    printf("THE CIRCUMFERENCE OF CIRCLE IS:%.2lf",circum);
    return 0;
}