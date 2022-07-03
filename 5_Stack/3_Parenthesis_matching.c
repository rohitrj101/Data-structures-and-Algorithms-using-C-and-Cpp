#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Stack
{
    int size;
    int top;
    char *S;
};

void push(struct Stack *st, char x)
{
    if (st->top == st->size - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

char pop(struct Stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        x = st->S[st->top--];
    }
    return x;
}

int isEmpty(struct Stack st)
{
    if (st.top == -1)
    {
        return 1;
    }
    return 0;
}

// for parenthesis
int isBalance(char *exp)
{
    struct Stack st;
    st.size = strlen(exp);
    st.top = -1;

    st.S = (char *)malloc(st.size * sizeof(char));

    // initialize Stack
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(&st, exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(st))
            {
                return false;
            }
            pop(&st);
        }
    }
    return isEmpty(st) ? true : false;
}

bool isMatchingPair(char character1, char character2)
{
    if (character1 == '(' && character2 == ')')
        return 1;
    else if (character1 == '{' && character2 == '}')
        return 1;
    else if (character1 == '[' && character2 == ']')
        return 1;
    else
        return 0;
}

// for all types of brackets
int isBalance2(char *exp)
{
    struct Stack st;
    st.size = strlen(exp);
    st.top = -1;

    st.S = (char *)malloc(st.size * sizeof(char));

    // initialize Stack
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(&st, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isEmpty(st))
            {
                return false;
            }
            else if (!isMatchingPair(pop(&st), exp[i]))
            {
                return false;
            }
        }
    }
    return isEmpty(st) ? true : false;
}

int main()
{
    // char *exp = "((a+b)*(c-d))";
    char *exp = "{([a+b]*[c-d])/e}";

    printf("%d ", isBalance2(exp));

    return 0;
}