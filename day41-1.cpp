/*Count characters in a string without using built-in length functions.*/
#include<stdio.h>
int main()
{
    char st[60];
    int count=0;
    printf("ENTER THE STRING WITH SPACES OR WITHOUT:");
    fgets(st,sizeof(st),stdin);
    while(st[count] != '\0')
    {
        count++;
    }
    if (st[count - 1] == '\n') 
    {
        count--;
    }

    printf("Number of characters: %d\n", count);
    return 0;
}