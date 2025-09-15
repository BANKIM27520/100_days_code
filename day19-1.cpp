/*Write a program to find the LCM of two numbers.*/
#include<stdio.h>
int main()
{
    int a,b,hcf=1,lcm;
    printf("ENTER THE VALUE OF A AND B:\n");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    lcm=(a*b)/hcf;
    printf("THE LCM IS:%d",lcm);
    return 0;
}