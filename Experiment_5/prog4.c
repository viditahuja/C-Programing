
            #include <stdio.h>

int main() {
    int m, n, p, q;
    int i, j, k;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("\nMatrix multiplication not possible!\n");
        printf("Number of columns of A must be equal to number of rows of B.\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    printf("\nEnter elements of Matrix A (%d x %d) in row-major order:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B (%d x %d) in row-major order:\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%4d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nProduct of Matrix A and B (Matrix C):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%4d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}