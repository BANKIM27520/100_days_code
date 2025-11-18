/*Perform diagonal traversal of a matrix.*/
#include<stdio.h>
int main()
{
    int m,n;
    printf("ENTER THE ORDER OF THE MATRIX: ");
    scanf("%d %d",&m,&n);
    int matrix[m][n];
    printf("ENTER THE ELEMENTS OF THE MATRIX:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("THE MATRIX IS:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("DIAGONAL TRAVERSAL OF THE MATRIX IS:\n");
    for(int d=0;d<m;d++)
    {
        int i=d,j=0;
        while(i>=0 && j<n)
        {
            printf("%d ",matrix[i][j]);
            i--;
            j++;
        }
    }
    for(int d=1;d<n;d++)
    {
        int i=m-1,j=d;
        while(i>=0 && j<n)
        {
            printf("%d ",matrix[i][j]);
            i--;
            j++;
        }
    }
    printf("\n");
    return 0;
}