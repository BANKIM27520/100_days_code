/*Find the second largest element in an array.*/
#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE ELEMENTS OF THE ARRAY:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int first_largest=-1, second_largest=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>first_largest)
        {
            second_largest=first_largest;
            first_largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=first_largest)
        {
            second_largest=arr[i];
        }
    }
    if(second_largest==-1)
    {
        printf("NO SECOND LARGEST ELEMENT\n");
    }
    else
    {
        printf("THE SECOND LARGEST ELEMENT IS %d\n",second_largest);
    }
    return 0;
}