/*Count positive, negative, and zero elements in an array.*/
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
    int pos_count=0, neg_count=0, zero_count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            pos_count++;
        }
        else if(arr[i]<0)
        {
            neg_count++;
        }
        else
        {
            zero_count++;
        }
    }
    printf("NUMBER OF POSITIVE ELEMENTS IN THE ARRAY: %d\n",pos_count);
    printf("NUMBER OF NEGATIVE ELEMENTS IN THE ARRAY: %d\n",neg_count);
    printf("NUMBER OF ZERO ELEMENTS IN THE ARRAY: %d\n",zero_count);
    return 0;
}
