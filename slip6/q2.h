#include<stdio.h>
#include<stdlib.h>


#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void init()
{
    front = rear = -1;
}

int isempty()
{
    if (front == -1 && rear == -1)
        return 1;
    else
        return 0;
}

int isfull()
{
    if (rear == MAX - 1)
        return 1;
    else
        return 0;
}

void enqueue(int x)
{
    if (isfull())
    {
        printf("Queue is full");
        return;
    }
    if (isempty())
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    queue[rear] = x;
}

void dequeue()
{
    if (isempty())
    {
        printf("Queue is empty");
        return;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

int peek()
{
    if (isempty())
    {
        printf("Queue is empty");

        return -1;
    }
    else
    {
        return queue[front];
    }
}

void display()
{
    int i;
    if (isempty())
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Queue is: ");
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("");
    }
}
