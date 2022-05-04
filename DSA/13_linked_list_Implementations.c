#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

//Traversal function
void linkedlist_traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head_first;
    struct Node *second;
    struct Node *third;

    //Allocate memory for nodes in the linked list in heap
    head_first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    //Link first and second nodes
    head_first->data = 7;
    head_first->next = second;

    //Link second and third nodes
    second->data = 11;
    second->next = third;

    // terminating the list at the third node
    third->data = 66;
    third->next = NULL;

    linkedlist_traversal(head_first);
    return 0;
}