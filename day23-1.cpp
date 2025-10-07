/*Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.*/
#include<stdio.h>
int main()
{
    int m,i;
    double sum=0;
    printf("ENTER THE NUMBER:");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        int num=2*i;
        int den=(num+(num-1));
        printf("%d/%d",num,den);
        if(i<m)
        {
            printf("+");
        }
        sum=sum+(double)num/den;
    }
    printf("\nTHE SUM OF SERIES IS=%.2lf",sum);
    return 0;
}