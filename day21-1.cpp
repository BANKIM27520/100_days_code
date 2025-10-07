/*Write a program to swap the first and last digit of a number.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    m=n;
    int ld=m%10;
    int digits=log10(m);
    int fd=m/pow(10,digits);
    int md=(m%(int)pow(10,digits))/10;
    int new_number=ld*pow(10,digits)+md*10+fd;
    printf("THE NEW NUMBER IS:%d",new_number);
    return 0;
}
