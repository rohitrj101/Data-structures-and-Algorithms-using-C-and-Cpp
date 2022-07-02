#include <stdio.h>
#include <stdlib.h>

int main()
{
    // array created fully in stack
    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}};

    // Displaying the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    // rows in stack column in heap
    int *B[3];

    B[0] = (int *)malloc(4 * sizeof(int));
    B[1] = (int *)malloc(4 * sizeof(int));
    B[2] = (int *)malloc(4 * sizeof(int));

    // // Displaying the array
    // for (int l = 0; l < 3; l++)
    // {
    //     for (int m = 0; m < 4; m++)
    //         printf("%d ", B[l][m]);
    //     printf("\n");
    // }
    
    // array created fully in heap
    int **C;

    C = (int **)malloc(3 * sizeof(int *));
    C[0] = (int *)malloc(4 * sizeof(int));
    C[1] = (int *)malloc(4 * sizeof(int));
    C[2] = (int *)malloc(4 * sizeof(int));

    // Displaying the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}