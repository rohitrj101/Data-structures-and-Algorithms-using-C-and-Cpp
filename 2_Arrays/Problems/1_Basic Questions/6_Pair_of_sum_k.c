#include<stdio.h>
#include<stdlib.h>

void PairSumK(int A[], int n, int k)
{
    int size = 17;
    int *H = (int *)malloc(size*sizeof(int));
    for (int i = 0; i < size; i++)
    {
        H[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
       if (H[k-A[i]]!=0 && k-A[i]>=0)
       {
           printf("%d + %d = %d\n", A[i], k-A[i], k);
       }
       H[A[i]]++;
    }
}
                   
int main()
{
    int A[] = {6,3,8,10,16,7,5,2,9,14};
    int n=10, k=10;

    PairSumK(A, n, k);
    return 0;
}