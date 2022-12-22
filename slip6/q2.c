// queue using init, enqueue, dequeue, isempty, peek operation

#include <stdio.h>
#include <stdlib.h>
#include "q2.h"

int main()
{
    int choice, x;
    init();
    while (1)
    {
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");

        printf("\n3.Display the front element");

        printf("\n4.Display all queue elements");

        printf("\n5.Quit"); 

        printf("\nEnter your choice : ");

        scanf("%d", &choice);

        if (choice == 5)
            break;

        switch (choice)
        {
        case 1:
            printf("\nInput the element for insertion in queue : ");
            scanf("%d", &x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            printf("\nElement at the front of the queue is : %d", peek()); 

            break;
        case 4:
            display();
            break;
        default:
            printf("Wrong choice"); 

        }
    }
    return 0;
}
