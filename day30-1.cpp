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
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("THE EVEN ELEMENT IN THE ARRAY IS: %d\n",arr[i]);
        }
        else
        {
            printf("THE ODD ELEMENT IN THE ARRAY IS: %d\n",arr[i]);
        }
    }
}