#include <bits/stdc++.h>
using namespace std;
 
// function to rearrange the array
void rearrangeArr(int arr[], int n)
{
    // total even positions
    int evenPos = n / 2;
 
    // total odd positions
    int oddPos = n - evenPos;
 
    int tempArr[n];
 
    // copy original array in an
    // auxiliary array
    for (int i = 0; i < n; i++)
        tempArr[i] = arr[i];
 
    // sort the auxiliary array
    sort(tempArr, tempArr + n);
 
    int j = oddPos - 1;
 
    // fill up odd position in original
    // array
    for (int i = 0; i < n; i += 2) {
        arr[i] = tempArr[j];
        j--;
    }
 
    j = oddPos;
 
    // fill up even positions in original
    // array
    for (int i = 1; i < n; i += 2) {
        arr[i] = tempArr[j];
        j++;
    }
 
    // display array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
 
// Another approach
void Rearrange(int a[], int n)
{
    int i, j, p, q;
    int *b = new int[n];
    for(i=0;i<n;i++)
        b[i]=a[i];
 
    sort(b,b+n);
    p=0;q=n-1;
    for(i=n-1;i>=0;i--){
            if(i%2!=0){
            a[i]=b[q];
            q--;
            }
            else{
                a[i]=b[p];
                p++;
            }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    delete [] b;
}
// Driver code
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int size = sizeof(arr) / sizeof(arr[0]);
    // rearrangeArr(arr, size);
    Rearrange(arr, size);
    
    return 0;
}