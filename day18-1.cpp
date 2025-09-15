/*Write a program to print all factors of a given number.*/
#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER =\t");
    scanf("%d",&n);
    printf("THE FACTORS OF THE NUMBER ARE:\n");
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d\n",i);
    }
    return 0;
}