/*Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.*/
#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array in sorted order: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("num=[");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("]\n");
    printf("Enter the value of x: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=x)
        {
            int num=arr[i];
            for(int j=0;j<n;j++)
            {
                if(arr[j]<=num && arr[j]>=x)
                {
                    printf("Ceil of %d is at index: %d\n",x,j);
                    return 0;
                }
            }
            break;
        }
    }
}
    
