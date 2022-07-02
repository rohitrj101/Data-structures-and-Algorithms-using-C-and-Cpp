#include<stdio.h>

void miss_ele(int A[], int n, int l, int h)
{
    int diff = l-0;
    int miss_num;

    for (int i = 0; i < n; i++)
    {
        if (A[i]-i != diff)
        {
            while(diff < A[i]-i)
            {   
                miss_num = i+diff;
                printf("%d ", miss_num);
                diff++;
            }
        }
    }
    
}
                   
int main()
{
    int A[] = {6,7,8,9,10,11,13,16,17};
    int n = 9;
    int l = A[0], h = A[n-1];

    miss_ele(A,n,l,h);

    return 0;
}