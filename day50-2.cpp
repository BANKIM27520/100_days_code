/*Print all sub-strings of a string.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    // Remove newline character if present
    if(str[len - 1] == '\n') 
    {
        str[len - 1] = '\0';
        len--;
    }
    printf("All substrings of the string are:\n");
    putchar('{');
    for(int i = 0; i < len; i++) 
    {
        for(int j = i; j < len; j++) 
        {
            for(int k = i; k <= j; k++) 
            {
                putchar(str[k]);
            }
            putchar(',');
        }
    }
    putchar('}');
    putchar('\n');
    return 0;
}