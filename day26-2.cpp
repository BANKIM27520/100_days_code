/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

* */
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        if(i%2==0)
        printf("\n");
        else
        {
        for(j=1;j<=i;j++)
        {
            printf("*\n");
        }
        printf("\n");
        }
    }
    for(i=4;i>=1;i--)
{
        if(i%2==0)
        printf("\n");
        else
        {
        for(j=1;j<=i;j++)
        {
            printf("*\n");
        }
        printf("\n");
        }
}

}