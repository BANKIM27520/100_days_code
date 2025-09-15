/*Write a program to calculate simple and compound interest for given principal, rate, and time.*/
#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,ci,si;
    double a=0;
    printf("Enter principal, rate and time:\n");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    a=p*pow((1+r/100),t);
    ci=a-p;
    printf("Simple Interest=%.2f\nCompound Interest=%.2f",si,ci);
    return 0;
}
