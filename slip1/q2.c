#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head, *tail = NULL;

void append(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}

void sortList()
{
    struct node *current = head, *index = NULL;
    int temp;

    if (head == NULL)
    {
        return;
    }
    else
    {
        while (current != NULL)
        {
            index = current->next;
            while (index != NULL)
            {
                if (current->data > index->data)
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

void display()
{
    struct node *current = head;
    if (head == NULL)
    {
        printf("\nList is empty...\n");
        return;
    }
    while (current != NULL)
    {
        printf("%d-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    int i, n, data;
    printf("\nHow many nodes you want?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the data:\n");
        scanf("%d", &data);
        append(data);
    }
    printf("\nOriginal List:\n");
    display();
    sortList();
    printf("\nSorted list is:\n");
    display();
    printf("\n");
    return 0;
}