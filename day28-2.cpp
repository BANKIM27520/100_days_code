/*Read and print elements of a one-dimensional array.*/
#include<stdio.h>
int main()
{
    int arr[100],len;
    printf("ENTER THE LENGTH OF THE ARRAY:");
    scanf("%d",&len);
    printf("ENTER THE ELEMENTS OF THE ARRAY:\n");
    for(int i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("THE ELEMENTS OF THE ARRAY ARE:\n");
    for(int i=0;i<len;i++)
    {
        printf("%d\t",arr[i]);
    }
}   