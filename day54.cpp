/*Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. 
Print the pivot integer x. 
If no such integer exists, print -1. 
Assume that it is guaranteed that there will be at most one pivot integer for the given input.*/
#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int left_sum=0;
        int right_sum=0;
        for(int j=1;j<=i;j++)
        {
            left_sum+=j;
        }
        for(int k=i;k<=n;k++)
        {
            right_sum+=k;
        }
        if(left_sum==right_sum)
        {
            printf("PIVOT INDEX IS:%d\n",i);
            return 0;
        }
    }
    printf("NO PIVOT INDEX FOUND.");
    printf("-1\n");
}