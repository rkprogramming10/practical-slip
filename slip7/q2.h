#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int top = -1;
char stack[100];

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if (top == -1)
        return -1;
    else
        return stack[top--];
}