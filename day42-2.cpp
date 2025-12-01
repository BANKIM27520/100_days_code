/*Convert a lowercase string to uppercase without using built-in functions.*/
#include<stdio.h>
int main()
{
    char st[50];
    printf("Enter a lowercase string: ");
    fgets(st, sizeof(st), stdin);
    for(int i = 0; st[i] != '\0'; i++)
    {
        if(st[i] >= 'a' && st[i] <= 'z')
        {
            st[i] = st[i] - ('a' - 'A');
        }
    }
}
