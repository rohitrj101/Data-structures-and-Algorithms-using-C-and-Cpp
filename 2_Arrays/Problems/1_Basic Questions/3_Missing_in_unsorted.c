#include<stdio.h>
#include<stdlib.h>
                   
int main()
{
    int A[] = {3,7,4,9,12,5, 1,11, 2, 10};
    int n = 10;
    int m = 13;

    int *H = (int *)malloc(m*sizeof(int));

    for (int i = 0; i <= m; i++)
    {
        H[i] = 0;
    }

    for (int i = 0 ; i < n; i++)
    {
        H[A[i]]++;
    }
    
    for (int i = 1; i < n; i++)
    {
        if (H[i]==0)
        {
            printf("%d ", i);
        }
        
    }
    
    return 0;
}