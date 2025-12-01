/*Check if a string is a palindrome.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50],rev[50];
    int i,len;
    printf("Enter a string: ");
    scanf("%s",str);
    len = strlen(str);
    // Create the reversed string
    for(i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[i] = '\0'; // Null-terminate the reversed string
    // Check if the original string and reversed string are the same
    if(strcmp(str, rev) == 0) { 
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    } 
    return 0;
}   