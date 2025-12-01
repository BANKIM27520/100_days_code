/*Print initials of a name with the surname displayed in full.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,len,start=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        if(i==0 )
        {
            printf("%c.",str[i]);
        }
        else
        {
            int m=len-2;
            while(m>=0 && str[m]!=' ')
            {
                m--;
            }
            if(str[i]==' ' && i!=m)
            {
                printf("%c.",str[i+1]);
            }
            else if(i==m+1)
            {
                printf(" %s", &str[m+1]);
                break;
            }

        }
        
    }
}