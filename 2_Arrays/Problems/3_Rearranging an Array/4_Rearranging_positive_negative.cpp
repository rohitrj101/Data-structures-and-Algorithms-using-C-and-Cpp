#include <iostream>
using namespace std;

void Rearrange(int A[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (A[i] < 0)
        {
            i++;
        }
        if (A[j] > 0)
        {
            j--;
        }
        if (A[i] > 0 && A[j] < 0)
        {
            swap(A[i], A[j]);
            i++;
            j--;
        }
    }

    int pos = i + 1, neg = 0;

    // Increment the negative index by
    // 2 and positive index by 1,
    // i.e., swap every alternate negative
    // number with next positive number
    while (pos < n && neg < pos && A[neg] < 0)
    {
        swap(A[neg], A[pos]);
        pos++;
        neg += 2;
    }

    for ( i = 0; i < n; i++)
        cout << A[i] << " ";
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int A[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = 9;

    Rearrange(A, n);

    return 0;
}