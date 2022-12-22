#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
    struct node *prev;
};
int cnt = 0;
struct node *create(struct node *head, int x)
{
    struct node *tmp;
    tmp = malloc(sizeof(struct node));
    tmp->info = x;
    tmp->prev = NULL;
    tmp->next = NULL;
    if (head == NULL)
    {
        head = tmp;
        /*printf("***Elements in Doubly List ***\n");
          q=head;
          while(q!=NULL)
          {
            printf("%d\t",q->info);
            q=q->next;
          }*/
    }
    return head;
}
void display(struct node *head)
{
    struct node *tmp;
    if (head == NULL)
        printf("\nCreate list first!");
    else
    {
        tmp = head;
        while (tmp != NULL)
        {
            printf("\t%d ->", tmp->info);
            tmp = tmp->next;
        }
    }
}