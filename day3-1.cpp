/*Write a program to convert temperature from Celsius to Fahrenheit.*/
#include<stdio.h>
int main()
{
    double c,f;
    printf("ENTER THE TEMPERATURE IN CELSIUS:");
    scanf("%lf",&c);
    f=(c*9/5)+32;
    printf("THE TEMPERATURE IN FAHRENHEIT IS:%.2lf",f);
    return 0;
}


