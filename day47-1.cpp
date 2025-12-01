/*Check if two strings are anagrams of each other*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, len1, len2;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    len1 = strlen(str1);
    len2 = strlen(str2);
    // Count frequency of each character in first string
    for(i = 0; i < len1; i++) 
    {
        if(str1[i] >= 'a' && str1[i] <= 'z') 
        {
            freq1[str1[i] - 'a']++;
        } 
        else if(str1[i] >= 'A' && str1[i] <= 'Z') 
        {
            freq1[str1[i] - 'A']++;
        }
    }
    // Count frequency of each character in second string
    for(i = 0; i < len2; i++) 
    {
        if(str2[i] >= 'a' && str2[i] <= 'z') 
        {
            freq2[str2[i] - 'a']++;
        } 
        else if(str2[i] >= 'A' && str2[i] <= 'Z') 
        {
            freq2[str2[i] - 'A']++;
        }
    }
    // Compare frequency arrays
    for(i = 0; i < 26; i++) 
    {
        if(freq1[i] != freq2[i]) 
        {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }
    printf("The strings are anagrams.\n");
    return 0;
}