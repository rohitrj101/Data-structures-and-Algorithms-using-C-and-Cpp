#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>

struct Node
{
    int data;
    struct Node *next;
} *top = NULL;

void push(int x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));

    if (t == NULL)
    {
        printf("Stack is Full\n");
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop()
{
    struct Node *t;
    int x = -1;

    if (top == NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

void Display()
{
    struct Node *p;
    p = top;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// int isEmpty(struct Stack st)
// {
//     if (st.top == -1)
//     {
//         return 1;
//     }
//     return 0;
// }
// for parenthesis
// int isBalance(char *exp)
// {
//     struct Stack st;
//     st.size = strlen(exp);
//     st.top = -1;

//     st.S = (char *)malloc(st.size * sizeof(char));

//     // initialize Stack
//     for (int i = 0; exp[i] != '\0'; i++)
//     {
//         if (exp[i] == '(')
//         {
//             push(&st, exp[i]);
//         }
//         else if (exp[i] == ')')
//         {
//             if (isEmpty(st))
//             {
//                 return false;
//             }
//             pop(&st);
//         }
//     }
//     return isEmpty(st) ? true : false;
// }

int precedence(char x)
{
    if (x=='+' || x=='-')
        return 1;
    else if (x=='*' || x=='/')
        return 2;
    else if (x=='^')
        return 6;
    else if (x=='(')
        return 7;
    else if (x==')')
        return 0;
    
    return 0;
}

int isOperand(char x)
{
    if (x=='+' || x=='-' || x=='*' || x=='/')
    {
        return 0;
    }
    return 1;
}

char * IntoPost(char *infix)
{
    char *postfix;
    int i = 0, j = 0;
    int len = strlen(infix);
    postfix = (char *)malloc((len+2)*sizeof(char));

    while (infix[i]!='\0')
    {
        if (isOperand(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else
        {
            if (precedence(infix[i]) > precedence(top->data))
            {
                push(infix[i++]);
            }
            else
            {
                postfix[j++] = pop();
            }  
        }
    }
    while (top!=NULL)
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';

    return postfix;
}

char * InToPostPA(char *infix)
{
    char *postfix;
    int i = 0, j = 0;
    int len = strlen(infix);
    postfix = (char *)malloc((len+2)*sizeof(char));

    while (infix[i]!='\0')
    {
        if (isOperand(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else
        {
            if (precedence(infix[i]) > precedence(top->data))
            {
                push(infix[i++]);
            }
            else
            {
                postfix[j++] = pop();
            }  
        }
    }
    while (top!=NULL)
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';

    return postfix;
}

int main()
{
    char *infix = "a+b*c-d/e";
    push('#');


    char *postfix = IntoPost(infix);

    printf("%s ", postfix);

    return 0;
}