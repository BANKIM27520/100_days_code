/*Remove all vowels from a string.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[60],result[60];
    int i, j = 0, len;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    for(i = 0; i < len; i++)
    {
        char ch=str[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            for(j=i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            len--;
        }    
    }
    printf("String after removing vowels: %s", str);
    return 0;
}