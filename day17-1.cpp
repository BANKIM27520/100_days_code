/*Write a program to check if a number is an Armstrong number.*/
#include<stdio.h>
int main()
{
    int n,rem,temp,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    printf("THE CUBE OF THE DIGIT OF THE NUMBER IS:%d\n",sum);
    if(temp==sum)
        printf("The number is armstrong");
    else
        printf("The number is not armstrong");
    return 0;
}