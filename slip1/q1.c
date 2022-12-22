#include <stdio.h>
#include <stdlib.h>
#include "q1.h"
int main()
{
    int n, data;
    struct node *head = NULL;
    while (1)
    {
        printf("\nMENU\n1.create\n2.Display\n3.Exit");
        printf("\nEnter your choice:");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("\nEnter the first element:");
            scanf("%d", &data);
            head = create(head, data);
            break;
        case 2:
            printf("\nLinked List is:\n");
            display(head);
            break;
        case 3:
            exit(0);
        default:
            printf("\nWrong choice");
        }
    }
    return 0;
}