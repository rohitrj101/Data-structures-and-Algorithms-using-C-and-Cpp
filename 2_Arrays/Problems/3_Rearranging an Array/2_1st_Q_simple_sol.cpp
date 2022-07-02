#include<iostream>
using namespace std;

void Rearrange(int *arr,int n){
    // Complete the function
    int i = 0;
    while(i < n){
        if(arr[i] != -1 && arr[i] != i){
            swap(arr[i], arr[arr[i]]);
        }
        else{
            i++;
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
    Rearrange(arr, n);
    Display(arr, n);

    return 0;
}