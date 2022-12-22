// copy one stack into another stack

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

struct stack
{
    int data[MAX];
    int top;
};

void push(struct stack *s, int x)
{
    if (s->top == MAX - 1)
    {
        printf("Stack is full");
        return;
    }
    s->top++;
    s->data[s->top] = x;
}

int pop(struct stack *s)
{
    int x;
    if (s->top == -1)
    {
        printf("Stack is empty");
        return -1;
    }
    x = s->data[s->top];
    s->top--;
    return x;
}

void display(struct stack s)
{
    int i;
    if (s.top == -1)
    {
        printf("Stack is empty");
        return;
    }
    printf("Stack is:");

    for (i = s.top; i >= 0; i--)
        printf("%d", s.data[i]);

    printf("");
}

void copy(struct stack *s1, struct stack *s2)
{
    int x;
    while (s1->top != -1)
    {
        x = pop(s1);
        push(s2, x);
    }
}

int main()
{
    struct stack s1, s2;
    s1.top = -1;
    s2.top = -1;
    push(&s1, 10);
    push(&s1, 20);
    push(&s1, 30);
    push(&s1, 40);
    push(&s1, 50);
    printf("Stack 1: ");
    display(s1);
    copy(&s1, &s2);
    printf("Stack 2:");

    display(s2);
    return 0;
}
