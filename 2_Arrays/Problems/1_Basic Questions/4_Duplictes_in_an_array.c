#include <stdio.h>

void Duplicates(int A[], int n)
{
    int last_duplicate = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] == A[i+1])
        {
            if (A[i]!= last_duplicate)
            {
                printf("%d\n", A[i]);
                last_duplicate = A[i];
            }
            
            int j = i + 1;
            while (A[i] == A[j])
                j++;
            printf("%d is appearing %d times\n", A[i], j-i);
            i = j - 1;
        }
    }
}

int main()
{
    int A[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    int n = 10;

    Duplicates(A, n);

    return 0;
}