/*Insert an element in an array at a given position.*/
#include<stdio.h>
int main()
{
    int n, key, pos, i;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&n);
    int arr[n+1];
    printf("ENTER THE ELEMENTS OF THE ARRAY:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE ELEMENT TO BE INSERTED:");
    scanf("%d",&key);
    printf("ENTER THE POSITION AT WHICH ELEMENT TO BE INSERTED:");
    scanf("%d",&pos);
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=key;
    printf("ARRAY AFTER INSERTION IS:\n");
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}