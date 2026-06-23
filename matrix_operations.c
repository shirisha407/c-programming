#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sum[10][10], mul[10][10], trans[10][10];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d%d", &r2, &c2);

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    /* Matrix Addition */
    if (r1 == r2 && c1 == c2)
    {
        printf("\nMatrix Addition:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }

    /* Matrix Multiplication */
    if (c1 == r2)
    {
        printf("\nMatrix Multiplication:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                mul[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    mul[i][j] += a[i][k] * b[k][j];
                }
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    }

    /* Transpose of Matrix A */
    printf("\nTranspose of Matrix A:\n");
    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < r1; j++)
        {
            trans[i][j] = a[j][i];
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
