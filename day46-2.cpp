/*Find the first repeating lowercase alphabet in a string.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[60];
    int i, len, freq[26] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    for(i = 0; i < len; i++) 
    {
        if(str[i] >= 'a' && str[i] <= 'z') 
        {
            freq[str[i] - 'a']++;
            if(freq[str[i] - 'a'] == 2) 
            {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0;
            }
        }
    }
}