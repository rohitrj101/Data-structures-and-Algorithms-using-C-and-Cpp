#include<stdio.h>

void MaxMin(int A[], int n)
{
    int min, max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
        else if (A[i] > max)
        {
            max = A[i];
        }
    }
    printf("Minimum is %d\n", min);
    printf("Maximum is %d ", max);
    
}
                   
int main()
{
    int A[] = {5,8,3,9,6,2,10,7,-1,4};
    int n=10;

    MaxMin(A, n);

    return 0;
}