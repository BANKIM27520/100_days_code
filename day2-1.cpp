/*Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/
#include<stdio.h>
int main()
{
    double l,b,area,peri;
    printf("ENTER THE LENGTH OF THE RECTANGLE:");
    scanf("%lf",&l);
    printf("ENTER THE BREADTH OF THE RECTANGLE:");
    scanf("%lf12.2",&b);
    area=l*b;
    peri=2*(l+b);
    printf("THE AREA OF RECTANGLE IS:%.2lf\n",area);
    printf("THE PERIMETER OF RECTANGLE IS:%.2lf",peri);
    return 0;
}