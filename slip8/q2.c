//check two stacks are identical or not

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top1 = -1, top2 = -1;
int stack1[100], stack2[100];

void push1(int x)
{
    stack1[++top1] = x;
}

void push2(int x)
{
    stack2[++top2] = x;
}

int pop1()
{
    if (top1 == -1)
        return -1;
    else
        return stack1[top1--];
}

int pop2()
{
    if (top2 == -1)
        return -1;
    else
        return stack2[top2--];
}

int main()
{
    int i, n, x;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of stack 1: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        push1(x);
    }
    printf("Enter the elements of stack 2: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        push2(x);
    }
    for (i = 0; i < n; i++)
    {
        if (pop1() != pop2())
        {
            printf("Not identical");
            return 0;
        }
    }
    printf("Identical");
    return 0;
}

