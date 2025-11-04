/*Delete an element from an array.*/
#include<stdio.h>
int main()
{
    int n, key, i, pos=-1;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE ELEMENTS OF THE ARRAY:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE ELEMENT TO BE DELETED:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
    {
        printf("ELEMENT NOT FOUND\n");
    }
    else
    {
        for(i=pos;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        printf("ARRAY AFTER DELETION IS:\n");
        for(i=0;i<n-1;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}