#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlist_traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//First node deletion
struct node *deletefirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
};

struct node *delete_index(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;

    for (int i = 1; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
struct node *delete_last(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);

    return head;
}

struct node *delete_given_value(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    printf("\nLinked List before deletation\n");

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    //Allocate memory for nodes in the linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    //Link first and second nodes
    head->data = 7;
    head->next = second;

    //Link second and third nodes
    second->data = 11;
    second->next = third;

    third->data = 66;
    third->next = fourth;

    // terminating the list at the fourth node
    fourth->data = 77;
    fourth->next = NULL;

    linkedlist_traversal(head);

    // printf("\nLinked List deletation of first node\n");
    // head = deletefirst(head);
    // linkedlist_traversal(head);

    // printf("\nLinked List deletation of index \n");
    // head = delete_index(head, 2);
    // linkedlist_traversal(head);

    // printf("\nLinked List deletation at last \n");
    // head = delete_last(head);
    // linkedlist_traversal(head);

    printf("\nLinked List deletation with respect or given value \n");
    head = delete_given_value(head, 76);
    linkedlist_traversal(head);

    return 0;
}