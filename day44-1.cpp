/*Count spaces, digits, and special characters in a string.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i, len, space_count = 0, digit_count = 0, special_count = 0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    len = strlen(str);
    for(i = 0; i < len; i++) 
    {
        if(str[i] == ' ') {
            space_count++;
        } 
        else if(str[i] >= '0' && str[i] <= '9') {
            digit_count++;
        } 
        else if((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z')) {
            special_count++;
        }
    }
}