#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insert(struct node **head, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = data;
    newNode->next = *head;

    // changing the new head to this freshly entered node
    *head = newNode;
}

// void insert(struct Node** head, int data){
// struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

//   newNode->data = data;
//   newNode->next = *head;

//  //changing the new head to this freshly entered node
//   *head = newNode;
// }

void display(struct node *node)
{
    printf("Linked List: ");

    // as linked list will end when Node is Null
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }

    printf("\n");
}