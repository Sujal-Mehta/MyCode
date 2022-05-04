#include <stdio.h>
#include <stdlib.h>

//Nodes _ structure
struct node
{
    int data;
    struct node *next;
};

//Traversal
void linkedlist_traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//Insertion at first
struct node *insert_at_first(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

//insert_at_index
struct node *insert_at_index(struct node *head, int data, int index)
{
    //Node to add
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    //Our head which will remain same but will help to run tranversal run to reach at index
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        // head change
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
};

//insert_at_end
struct node *insert_at_end(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
};

struct node *insert_after_node(struct node *head, struct node *previous_node, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = previous_node->next;
    previous_node->next = ptr;
    return head;
};

int main()
{
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

    //printing
    printf("\nTraversal\n");
    linkedlist_traversal(head);

    printf("\nAfter adding at first\n");
    head = insert_at_first(head, 10);
    linkedlist_traversal(head);

    printf("\nAfter adding at index\n");
    head = insert_at_index(head, 25, 3);
    linkedlist_traversal(head);

    printf("\nAfter adding at end\n");
    head = insert_at_end(head, 52);
    linkedlist_traversal(head);

    printf("\nafter node insertion\n");
    head = insert_after_node(head, second, 82);
    linkedlist_traversal(head);

    return 0;
}