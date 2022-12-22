#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int queue_array[MAX];
int rear = -1;
int front = -1;

void insert(int item)
{
    int i;
    if (rear == MAX - 1)
        printf("\nQueue Overflow");
    else
    {
        if (front == -1)
            /*If queue is initially empty */
            front = 0;
        rear = rear + 1;
        queue_array[rear] = item;
    }
}

void delete()
{
    int i;
    if (front == -1 || front > rear)
    {
        printf("\nQueue Underflow");
        return;
    }
    else
    {
        printf("\nElement deleted from queue is : %d", queue_array[front]);
        front = front + 1;
    }
}

void display()
{
    int i;
    if (front == -1)
        printf("\nQueue is empty");
    else
    {
        printf("\nQueue is :");

        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("");
    }
}
