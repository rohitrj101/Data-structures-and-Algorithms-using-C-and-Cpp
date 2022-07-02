#include <stdio.h>
#include <stdlib.h>

// Using nested loops
void Duplicates(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        if (A[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (A[i] == A[j])
                {
                    count++;
                    A[j] = -1;
                }
            }
            if (count > 1)
            {
                printf("%d is appearing %d times\n", A[i], count);
            }
        }
    }
}

// Using Hashing
void DuplicatesH(int A[], int n)
{
    int max_A=0;
    for (int i = 0; i < n; i++)
    {
        if (A[i]>max_A)
        {
            max_A = A[i];
        }
        
    }
    max_A++;

    int *H = (int *)malloc(max_A*sizeof(int));
    for (int i = 0; i < max_A; i++)
    {
        H[i]=0;
    }
    
    for (int i = 0; i < n; i++)
    {
        H[A[i]]++;
    }
    for (int i = 0; i < max_A; i++)
    {
        if (H[i]>1)
        {
            printf("%d is appearing %d times\n", i, H[i]);
        }
        
    }
    
}

int main()
{
    int A[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int n = 10;

    // Duplicates(A, n);
    DuplicatesH(A, n);

    return 0;
}