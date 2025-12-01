/*Replace spaces with hyphens in a string.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i,len;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    len = strlen(str);
    for(i = 0; i < len; i++) 
    {
        if(str[i] == ' ') 
        {
            str[i] = '-';
        }
    }
    printf("Modified string: %s", str);
    return 0;
}