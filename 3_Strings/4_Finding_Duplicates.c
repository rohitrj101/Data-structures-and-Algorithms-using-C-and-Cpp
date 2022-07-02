#include<stdio.h>

void Duplicate(char *A)
{
    int H=0, x=0;

    for (int i = 0; A[i]!=0; i++)
    {
        x=1;
        x = x<<(A[i]-97);

        if ((x & H )> 0)
        {
            printf("%c is Duplicate\n", A[i]);
        }
        else{
            H = x | H;
        }
    }
}
                   
int main()
{
    char A[] = "finding";
    Duplicate(A);
    
    return 0;
}