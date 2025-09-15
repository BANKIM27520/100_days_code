/*Write a program to find the 1’s complement of a binary number and print it.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char bin[20], comp[20];
    printf("ENTER THE BINARY NUMBER: ");
    scanf("%s", bin);

    int len = strlen(bin);
    for(int i = 0; i < len; i++)
    {
        if(bin[i] == '0')
            comp[i] = '1';
        else if(bin[i] == '1')
            comp[i] = '0';
        else
        {
            printf("Invalid binary digit!\n");
            return 1;
        }
    }
    comp[len] = '\0';
    printf("THE 1'S COMPLEMENT IS = %s\n", comp);
    return 0;
}