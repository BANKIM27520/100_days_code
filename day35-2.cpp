/*Rotate an array to the right by k positions.*/
#include<stdio.h>
int main()
{
    int n,key,i,j;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE ELEMENTS OF THE ARRAY:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE POSITION BY WHICH YOU WANT TO ROTATE THE ARRAY TO THE RIGHT:");
    scanf("%d",&key);
    if(key>n)
    {
        key=key%n;
    }
    if(key==0)
    {
        printf("ARRAY AFTER ROTATION IS:\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        return 0;
    }
    if(key<0)
    {
        key=n+key;
    }
    printf("ARRAY AFTER ROTATION IS:\n");
    for(j=(n-key);j<n;j++)
    {
        printf("%d ",arr[j]);
    }
    for(j=0;j<(n-key);j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}