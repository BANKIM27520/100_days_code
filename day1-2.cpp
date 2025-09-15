/*Write a program to input two numbers and display their sum, difference, product, and quotient.*/
#include<stdio.h>
int main()
{
    int a,b,mul,add,sub;
    double div;
    printf("ENTER THE VALUE OF A:");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B:");
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=(double)a/b;
    printf("THE SUM IS:%d\n",add);
    printf("THE DIFFERENCE IS:%d\n",sub);
    printf("THE PRODUCT IS:%d\n",mul);
    printf("THE QUOTIENT IS:%.2lf",div);
    return 0;
}

