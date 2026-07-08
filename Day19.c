//Q-73

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int r, c, i, j;

    // Input rows and columns
    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    // Input first matrix
    printf("Enter first matrix:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &a[i][j]);

    // Input second matrix
    printf("Enter second matrix:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &b[i][j]);

    // Add matrices
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    // Display result
    printf("Sum Matrix:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}

//Q-74
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sub[10][10];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter first matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter second matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    // Subtract matrices
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            sub[i][j]=a[i][j]-b[i][j];

    printf("Result Matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d ",sub[i][j]);
        printf("\n");
    }

    return 0;
}

//Q-75
#include <stdio.h>

int main() {
    int a[10][10];
    int r,c,i,j;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    printf("Enter matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Transpose Matrix:\n");

    // Rows become columns
    for(i=0;i<c;i++){
        for(j=0;j<r;j++)
            printf("%d ",a[j][i]);
        printf("\n");
    }

    return 0;
}

//Q-76

#include <stdio.h>

int main() {
    int a[10][10];
    int n,i,j,sum=0;

    printf("Enter order of square matrix: ");
    scanf("%d",&n);

    printf("Enter matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    // Sum of principal diagonal
    for(i=0;i<n;i++)
        sum += a[i][i];

    printf("Diagonal Sum = %d",sum);

    return 0;
}