/*Find the maximum and minimum element in an array.*/
#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF INTEGER YOU WANT IN THE ARRAY:");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER %d ELEMENTS OF THE ARRAY:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }   
    printf("THE MAXIMUM ELEMENT IN THE ARRAY IS: %d\n",max);
    printf("THE MINIMUM ELEMENT IN THE ARRAY IS: %d\n",min);
}