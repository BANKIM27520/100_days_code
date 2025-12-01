/*Write a Program to take an array of integers as input, calculate the pivot index of this array. 
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. 
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. 
This also applies to the right edge of the array. 
Print the leftmost pivot index. If no such index exists, print -1.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int left_sum=0;
        int right_sum=0;
        for(int j=0;j<i;j++)
        {
            left_sum+=arr[j];
        }
        for(int k=i+1;k<n;k++)
        {
            right_sum+=arr[k];
        }
        if(left_sum==right_sum)
        {
            printf("Pivot index is: %d\n",i);
            return 0;
        }
    }
    printf("No pivot index found.");
    printf("-1\n");
}