#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *linkelist_traversal_forward(struct node *head)
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("element : %d\n", p->data);
        p = p->next;
    }
    return p;
}

void linkelist_traversal_backward(struct node *head)
{
    struct node *previous = head;
    while (previous != NULL)
    {
        printf("element : %d\n", previous->data);
        previous = previous->prev;
    }
}

int main()
{
    struct node *head, *first, *second, *third;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 100;
    head->next = first;
    head->prev = NULL;

    first->data = 200;
    first->next = second;
    first->prev = head;

    second->data = 300;
    second->next = third;
    second->prev = first;

    third->data = 400;
    third->next = NULL;
    third->prev = second;

    linkelist_traversal_forward(head);
    linkelist_traversal_backward(third);
    return 0;
}