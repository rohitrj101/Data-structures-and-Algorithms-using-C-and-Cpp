#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool Palindrome(char *A, int n)
{
    int i, j;
    for (i = 0, j=n-1; i < j; i++, j--)
    {
        if (A[i]!=A[j])
        {
            return false;
        }
    }
    return true;
}
                   
int main()
{
    char A[] = "madam";
    int n = strlen(A);

    if (Palindrome(A, n))
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
    

    return 0;
}