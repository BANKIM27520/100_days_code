/*Insert an element in a sorted array at the appropriate position.*/
#include<stdio.h>
int main()
{
    int n, key, i;
    printf("ENTER THE SIZE OF THE SORTED ARRAY:");
    scanf("%d",&n);
    int arr[n+1];
    printf("ENTER THE ELEMENTS OF THE SORTED ARRAY:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE ELEMENT TO BE INSERTED:");
    scanf("%d",&key);
    for(i=n-1;i>=0 && arr[i]>key;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[i+1]=key;
    printf("ARRAY AFTER INSERTION IS:\n");
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}