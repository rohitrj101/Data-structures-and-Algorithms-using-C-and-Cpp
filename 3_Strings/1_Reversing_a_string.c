#include<stdio.h>

void Reverse(char *A)
{
    int i, temp;
    for ( i = 0; A[i] != '\0'; i++){}
    
    i = i-1;
    for (int j = 0; j < i; j++, i--)
    {
        temp = A[j];
        A[j] = A[i];
        A[i] = temp;
    }
}

void printstring(char *A)
{
    for (int i = 0; A[i] != '\0'; i++)
    {
        printf("%c", A[i]);
    }
    printf("\n");
}
                   
int main()
{
    char A[] = "python"; 

    printstring(A);
    Reverse(A);
    printstring(A);

    return 0;
}