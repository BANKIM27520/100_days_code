/*Search in a sorted array using binary search.*/
#include<stdio.h>
int main()
{
    int n,key,low,high,mid,flag=0;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE ELEMENTS OF THE SORTED ARRAY:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE ELEMENT TO BE SEARCHED:");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("ELEMENT FOUND AT POSITION %d\n",mid+1);
            flag=1;
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(flag==0)
    {
        printf("ELEMENT NOT FOUND\n");
    }
    return 0;
}