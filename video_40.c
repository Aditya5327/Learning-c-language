#include <stdio.h>

int main()
{
    int ra, rb, ca, cb;

    printf("Enter the number of rows in Matrix A : \n");
    scanf("%d", &ra);
    printf("Enter the number of columns in Matrix A : \n");
    scanf("%d", &ca);
    printf("Enter the number of rows in Matrix B : \n");
    scanf("%d", &rb);
    printf("Enter the number of columns in Matrix B : \n");
    scanf("%d", &cb);

    int A[ra][ca], B[rb][cb], C[ra][cb];

    if (ca == rb)
    {
        printf("Enter the elements of Matrix A : \n");
        for (int i = 0; i < ra; i++)
        {
            for (int j = 0; j < ca; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }

        printf("Enter the elements of Matrix B : \n");
        for (int i = 0; i < rb; i++)
        {
            for (int j = 0; j < cb; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }


        for (int i = 0; i < ra; i++)
        {
            for (int j = 0; j < cb; j++)
            {
                C[i][j] = 0;
                for (int k = 0; k < ca; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        printf("The resultant multiplicative matrix is : \n");
        for (int i = 0; i < ra; i++)
        {
            for (int j = 0; j < cb; j++)
            {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication is not possible.\n");
    }

    return 0;
}