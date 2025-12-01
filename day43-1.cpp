/*Reverse a string.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[60],rev[60];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Original string: %s", str);
    strrev(str);
    printf("Reversed string: %s", str);
    return 0;
}