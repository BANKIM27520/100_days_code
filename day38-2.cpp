/*Check if a matrix is symmetric.*/
#include<stdio.h>
int main()
{
    int m,n,flag=1;
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
    if(m!=n)
    {
        printf("MATRIX IS NOT SYMMETRIC\n");
    }
    else
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]!=matrix[j][i])
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1)
        {
            printf("MATRIX IS SYMMETRIC\n");
        }
        else
        {
            printf("MATRIX IS NOT SYMMETRIC\n");
        }
    }
    return 0;
}
