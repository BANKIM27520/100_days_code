/*Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/
#include<stdio.h>
int main()
{
    int sec,hr,min,s;
    printf("Enter time in seconds:\n");
    scanf("%d",&sec);
    hr=sec/3600;
    min=(sec%3600)/60;
    s=(sec%3600)%60;
    printf("Time in hh:mm:ss format is %02d:%02d:%02d",hr,min,s);
    return 0;
}
