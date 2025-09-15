/*Write a program to find the HCF (GCD) of two numbers.*/
#include<stdio.h>
int main()
{
    int a,b,hcf=1;
    printf("ENTER THE VALUE OF A AND B:\n");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    printf("THE HCF IS:%d",hcf);
    return 0;
}