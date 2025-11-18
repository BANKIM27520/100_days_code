/*Find the sum of each row of a matrix and store it in an array.*/
#include<stdio.h>
int main()
{
    int r,c,i,j;
    int sum=0;
    int arr[10];
    printf("ENTER THE NUMBER OF ROWS:");
    scanf("%d",&r);
    printf("ENTER THE NUMBER OF COLUMNS:");
    scanf("%d",&c);
    int matrix[r][c];
    printf("ENTER THE ELEMENTS OF THE MATRIX:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("THE MATRIX IS:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
                sum=sum+matrix[i][j];
        }
        arr[i]=sum;
        sum=0;
    }
    printf("THE SUM OF EACH ROW IS:\n");
    for(i=0;i<r;i++)
    {
        printf("ROW %d: %d\n",i+1,arr[i]);
    }
    return 0;
}