#include<iostream>
using namespace std;

// Using two for loops
void rearrange(int A[], int n)
{
    int i,j,temp;
    for ( i = 0; i < n; i++)
    {
        
        for (j = 0; j < n; j++)
        {
            if (A[j]==i)
            {
                temp = A[j];
                A[j] = A[i];
                A[i] = temp;
                break;
            }
        }
        
    }
    
    for (i = 0; i < n; i++)
    {
        if (A[i] != i)
        {
            A[i] = -1;
        }
        
    }
    
}

// Better approach
void fixArray(int A[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (A[i] != -1 && A[i] != i)
        {
            int x = A[i];
 
            // check if desired place
            // is not vacate
            while (A[x] != -1 && A[x] != x)
            {
                // store the value from
                // desired place
                int y = A[x];
 
                // place the x to its correct
                // position
                A[x] = x;
 
                // now y will become x, now
                // search the place for x
                x = y;
            }

            if(x >= len)
                A[x] =-1;
            // place the x to its correct
            // position
            A[x] = x;
 
            // check if while loop hasn't
            // set the correct value at A[i]
            if (A[i] != i)
            {
                // if not then put -1 at
                // the vacated place
                A[i] = -1;
            }
        }
    }
}

void Display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
                   
int main()
{
    int arr[] = {4,2,3,0,1,5,8,9,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display(arr, n);
    // rearrange(arr, n);
    fixArray(arr, n);
    Display(arr, n);

    return 0;
}