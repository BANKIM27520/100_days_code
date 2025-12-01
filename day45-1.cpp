/*Count frequency of a given character in a string.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],fre[26]={0};
    int i,len;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    len = strlen(str);
    for(i = 0; i < len; i++) 
    {
        if((str[i] >= 'a' && str[i] <= 'z')) 
        {
            fre[str[i] - 'a']++;
        } 
        else if((str[i] >= 'A' && str[i] <= 'Z')) 
        {
            fre[str[i] - 'A']++;
        }
    }
    printf("Character Frequency:\n");
    for(i = 0; i < 26; i++)
    {
        if(fre[i] != 0) 
        {
            printf("%c: %d\n", i + 'a', fre[i]);
        }
    }
}