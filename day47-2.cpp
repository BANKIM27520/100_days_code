/*Find the longest word in a sentence.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    int maxLen = 0, currLen = 0, startIndex = 0, maxStartIndex = 0;
    for(int i = 0; ; i++) 
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') 
        {
            currLen++;
        } 
        else 
        {
            if(currLen > maxLen) 
            {
                maxLen = currLen;
                maxStartIndex = startIndex;
            }
            currLen = 0;
            startIndex = i + 1;
        }
        if(str[i] == '\0' || str[i] == '\n') 
        {
            break;
        }
    }
    printf("Longest word: ");
    for(int i = maxStartIndex; i < maxStartIndex + maxLen; i++) 
    {
        putchar(str[i]);
    }
    printf("\n");
    return 0;
}