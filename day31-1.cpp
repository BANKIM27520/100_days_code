/*Search for an element in an array using linear search.*/
#include<stdio.h>
int main()
{
    int n,key,flag=0;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE ELEMENTS OF THE ARRAY:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE ELEMENT TO BE SEARCHED:");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("ELEMENT FOUND AT POSITION %d\n",i+1);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("ELEMENT NOT FOUND\n");
    }
    return 0;
}