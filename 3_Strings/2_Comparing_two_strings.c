#include <stdio.h>

void Compare(char *A, char *B)
{
    int i, j;

    for (i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; i++, j++)
    {
        if (A[i] != B[j])
        {
            break;
        }
    }
    if (A[i] == B[j])
    {
        printf("Equal ");
    }
    else if (A[i] < B[j])
    {
        printf("Smaller ");
    }
    else
    {
        printf("Greater ");
    }
}

int main()
{
    char A[] = "Painter";
    char B[] = "Painting";

    Compare(A, B);

    return 0;
}