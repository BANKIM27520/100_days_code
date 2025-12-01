/*Reverse each word in a sentence without changing the word order*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,leng, start=0,end;
    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);
    leng=strlen(str);
    for(i=0;i<leng;i++)
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\0')
        {
            end=i-1;
            // Reverse the word from start to end
            while(start<end)
            {
                char temp=str[start];
                str[start]=str[end];
                str[end]=temp;
                start++;
                end--;
            }
            start=i+1; // Update start to the next character after space
        }
    }
    printf("Sentence after reversing each word: %s",str);
    return 0;
}