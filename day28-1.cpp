/*Write a program to print all the prime numbers from 1 to n.*/
#include<stdio.h>
int main()
{
    int n,i,j;
    int flag;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printf("THE PRIME NUMBERS FROM 1 TO %d ARE:\n",n);
    for(i=2;i<=n;i++)
    {
        flag=1;
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("%d\n",i);
    }
}