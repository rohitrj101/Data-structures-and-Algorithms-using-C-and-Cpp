#include<stdio.h>

// Using Recursion
void Permutation(char s[], int k)
{
    static int A[10] = {0};
    static char Res[10];
    int i;
    if (s[k]=='\0')
    {
        Res[k]='\0';
        printf(Res);
        printf("\n");
    }
    else
    {
        for (i = 0; s[i]!='\0'; i++)
        {
            if (A[i]==0)
            {
                Res[k] = s[i];
                A[i] = 1;
                Permutation(s, k+1);
                A[i] = 0;
            }
            
        }
        
    }
}

void swap(char *, char *);

void Perm(char s[], int l, int h)
{
    int i;
    if (l==h)
    {
        printf(s);
        printf("\n");
    }
    else
    {
        for (i = l; i <= h; i++)
        {
            swap(&s[l], &s[i]);
            Perm(s, l+1, h);
            swap(&s[l], &s[i]);
        }
        
    }
}
                 
int main()
{
    char s[] = "ABC";
    int k = 0;
    // Permutation(s, k);
    Perm(s,0,2);

    return 0;
}

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
  