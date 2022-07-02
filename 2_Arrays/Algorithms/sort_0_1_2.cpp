#include<iostream>
using namespace std;

void sort012(int A[], int n)
{
    int *B = new int[n];
    int i, j;

    for ( i = 0, j = 0; i < n; i++)
    {
        if (A[i]==0)
        {
            B[j] = A[i];
            j++;
        }
        
    }
    for (i = 0; i < n; i++)
    {
        if (A[i]==1)
        {
            B[j] = A[i];
            j++;
        }
        
    }
    for (i = 0; i < n; i++)
    {
        if (A[i]==2)
        {
            B[j] = A[i];
            j++;
        }
        
    }
    for (i = 0; i < n; i++)
    {
        A[i] = B[i];
    }
    
    
}

void printArray(int* arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
                   
int main()
{
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    sort012(arr, n);
    printArray(arr, n);
    return 0;
}