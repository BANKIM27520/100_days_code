/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.*/
#include <stdio.h>
int main()
{
    int n,target,key=0;
    int count=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the sorted array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("num=[");
    for(int i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("]\n");
    printf("Enter the target value: ");
    scanf("%d",&target);
    int first=-1,last=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            count++;
            if(first==-1)
            {
                first=i;
            }
            last=i;
            key=1;
        }
    }
    if(key==1)
    {
        printf("Output: [%d, %d]\n",first,last);
        printf("The target %d occurs %d times in the array.\n",target,count);
    }
    else
    {
        printf("Output: [-1, -1]\n");
    }

}