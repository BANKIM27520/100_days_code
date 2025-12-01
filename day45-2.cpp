/*Toggle case of each character in a string.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, len;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    for(i = 0; i < len; i++) 
    {
        if(str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - ('a' - 'A'); 
        } 
        else if(str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] = str[i] + ('a' - 'A'); 
        }
    }
    printf("Toggled case string: %s", str);
    return 0;
}