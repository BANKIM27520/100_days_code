/*Find the digit that occurs the most times in an integer number.*/
#include<stdio.h>
int main()
{
    int n,count[10]={0};
    printf("ENTER AN INTEGER NUMBER:");
    scanf("%d",&n);
    while(n!=0)
    {
        int digit=n%10;
        count[digit]++;
        n=n/10;
    }
    int max_count=0,digit=0;
    for(int i=0;i<10;i++)
    {
        if(count[i]>max_count)
        {
            max_count=count[i];
            digit=i;
        }
    }
    printf("THE DIGIT THAT OCCURS THE MOST IS %d AND IT OCCURS %d TIMES\n",digit,max_count);
    return 0;
}