#include<stdio.h>
int main()
{
    int m,n;
    printf("ENTER THE ROWS AND COLUMNS OF THE MATRIX: ");
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
    printf("THE FIRST MATRIX IS:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    int p,q;
    printf("ENTER THE ROWS AND COLOUMN OF SECOND MATRIX:\n");
    scanf("%d %d",&p,&q);
    printf("ENTER THE ELEMENTS OF SECOND MATRIX:\n");
    int matrix2[p][q];
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("THE SECOND MATRIX IS:\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
    printf("THE SUM OF THE TWO MATRICES IS:\n");
    if(m!=p || n!=q)
    {
        printf("MATRIX ADDITION OF THE TWO MATRICES IS NOT POSSIBLE\n");
    }
    else
    {
        int sum[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                sum[i][j]=matrix[i][j]+matrix2[i][j];
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",sum[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
    
