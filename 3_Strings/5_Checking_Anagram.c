#include <stdio.h>
#include<stdlib.h>

void Anagram(char *A, char *B)
{
    int n = 27, i;
    int *H = (int *)malloc(n * sizeof(int));

    for ( i = 0; i < n; i++)
    {
        H[i]=0;
    }

    for (i = 0; A[i] != '\0'; i++)
    {
        H[A[i] - 97]++;
    }
    for (i = 0; B[i]!= '\0'; i++)
    {
        H[A[i] - 97]--;
        if (H[A[i] - 97] < 0)
        {
            printf("Not Anagram");
            break;
        }
    }
    if (B[i] == '\0')
    {
        printf("Anagram");
    }
}

// we can also use bitsat if there are no duplicates

int main()
{
    char A[] = "decimal";
    char B[] = "medical";

    Anagram(A, B);

    return 0;
}