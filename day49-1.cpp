/*Print the initials of a name.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,len;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        if(i==0)
        {
            printf("%c",str[i]);
        }
        else if(str[i]==' ')
        {
            printf(".%c",str[i+1]);
        }
        else
        {
            continue;
        }
    }
    printf(".");
    return 0;
}