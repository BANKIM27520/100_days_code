/*Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    double sum =0;
    for (i=1;i<=n;i++)
    {
        int num=2*i-1;
        int den=2*i;
        if(num==1)
        {
            sum=sum+1;
            printf("1");
        }
        else
        {
            printf("+%d/%d",num,den);
            sum=sum+(double)num/den;
        }
       
    }
    printf("\nSUM OF THE SERIES IS:%.2lf",sum);
    return 0;
}