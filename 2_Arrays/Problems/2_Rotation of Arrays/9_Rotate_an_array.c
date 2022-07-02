#include<stdio.h>
#include<stdlib.h>

// Using loops (one by one)
void rotate(int A[], int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        int temp = A[0];
        for (int j = 0; j < n - 1; j++)
        {
            A[j] = A[j + 1];
        }
        A[n - 1] = temp;
    }
}

// Using Hashing (temporary array)
void rotateH(int A[], int n, int k)
{
    int *H = (int *)malloc(k*sizeof(int));
    for (int i = 0; i < k; i++)
    {
        H[i] = A[i];
    }
    
    int j = k;
    for (int i = 0; i < n-k; i++)
    {
        A[i] = A[j++];
    }

    for (int i = n-k, j = 0; i < n; i++, j++)
    {
        A[i] = H[j];
    }
    
}

void Display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7, k = 4;

    rotateH(A, n, k);
    Display(A, n);
    
    return 0;
}