/*Find the sum of each row of a matrix and store it in an array.*/
#include<stdio.h>
int main()
{
    int r,c,i,j;
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
    printf("THE TRANSPOSE OF THE MATRIX IS:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }
}