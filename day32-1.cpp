/*Merge two arrays*/
#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE SIZE OF THE 1 ARRAY:");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE ELEMENTS OF THE 1 ARRAY:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m;
    printf("ENTER THE SIZE OF THE 2 ARRAY:");
    scanf("%d",&m);
    int arr2[m];
    printf("ENTER THE ELEMENTS OF THE 2 ARRAY:");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int arr3[n+m];
    for(int i=0;i<(m+n);i++)
    {
        if(i<n)
        {
            arr3[i]=arr[i];
        }
        else
        {
            arr3[i]=arr2[i-n];
        }
    }
    printf("THE MERGED ARRAY IS:\n");
    for(int i=0;i<(m+n);i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}