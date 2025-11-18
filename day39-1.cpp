/*Check if the elements on the diagonal of a matrix are distinct.*/
#include <stdio.h>
int main() {
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("THE MATRIX IS:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int distinct = 1; 
    for (int i = 0; i < n && i < m; i++) {
        for (int j = i + 1; j < n && j < m; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0; 
                break;
            }
        }
        if (distinct==0) {
            break;
        }
    }
    if (distinct==1) {
        printf("Distinct\n");
    } else {
        printf("Not Distinct\n");
    }
    return 0;
}