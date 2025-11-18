/*Multiply two matrices.*/
#include<stdio.h>
int main()
{
    int m1,n1,m2,n2;
    printf("ENTER THE ORDER OF FIRST MATRIX: ");
    scanf("%d %d",&m1,&n1);
    int matrix1[m1][n1];
    printf("ENTER THE ELEMENTS OF FIRST MATRIX:\n");
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("ENTER THE ORDER OF SECOND MATRIX: ");
    scanf("%d %d",&m2,&n2);
    if(n1!=m2)
    {
        printf("MATRIX MULTIPLICATION NOT POSSIBLE\n");
        return 0;
    }
    int matrix2[m2][n2];
    printf("ENTER THE ELEMENTS OF SECOND MATRIX:\n");
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    int result[m1][n2];
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            result[i][j]=0;
            for(int k=0;k<n1;k++)
            {
                result[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    printf("RESULTANT MATRIX AFTER MULTIPLICATION IS:\n");
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}