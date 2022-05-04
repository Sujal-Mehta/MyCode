#include <stdio.h>
#include <stdlib.h>

/*	structure	*/
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

/*	display functions	*/
void display_traversal(struct node *head)
{
    printf("\nThe List is : ");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

void reversal_display_traversal(struct node *head)
{
    printf("\nThe list using prev : ");
    while (head->next != NULL)
    {
        head = head->next;
    }
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->prev;
    }
}

/*	Display Number of Nodes  	*/
int no_of_nodes(struct node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

/*	creating node individual node 	*/
struct node *createNode(int value)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = value;
    new_node->prev = NULL;
    new_node->next = NULL;
    return new_node;
}

/*	adding new node at beginning of list	*/
struct node *add_beg(struct node *head)
{
    int value;

    printf("\n\nEnter The Data You want to set for new head node : ");
    scanf("%d", &value);

    struct node *new_node = createNode(value);

    new_node->next = head;
    head->prev = new_node;
    new_node->next = head;
    head = new_node;
    return head;
}

/*	adding new node at end of list	*/
struct node *add_end(struct node *head)
{
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    int value;
    printf("\n\nEnter The Data You want to set for new head node (end): ");
    scanf("%d", &value);

    struct node *new_node = createNode(value);
    ptr->next = new_node;
    new_node->prev = ptr;
    return head;
}

/*	Adding node at index	*/
struct node *add_index(struct node *head, int index)
{
    struct node *n = head;
    struct node *ptr = head;

    printf("\nEnter the value for new node (index) : ");
    int value;
    scanf("%d", &value);

    struct node *new_node = createNode(value);

    int count = no_of_nodes(head);

    for (int i = 0; i < index - 1; i++)
    {
        ptr = ptr->next;
    }
    for (int i = 0; i < index; i++)
    {
        n = n->next;
    }
    ptr->next = new_node;
    new_node->prev = ptr;
    new_node->next = n;
    return head;
    // printf("ptr = %d  , n= %d", ptr->data, n->data);
}

/*	Delete first node 	*/
struct node *del_beg(struct node *head)
{
    printf("\n\nDeleted Node a Beginning  Position ");
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

/*	Delete Last Element	*/
struct node *del_last(struct node *head)
{
    struct node *n = head;
    struct node *ptr = head;

    while (n->next != NULL)
    {
        n = n->next;
        ptr = ptr->next;
    }
    n = n->prev;
    n->next = NULL;
    free(ptr);
    return head;
}

/*	Delete at index	*/
struct node *del_index(struct node *head, int index)
{
    struct node *n = head;
    struct node *q = head;
    struct node *ptr = head;
    int i;
    int count = no_of_nodes(head);

    if (index == 0 || index == count - 1)
    {
        if (index == 0)
        {
            head = head->next;
            return head;
        }
        else
        {
            for (int i = 0; i < count - 2; i++)
            {
                n = n->next;
            }

            n->next = NULL;
            return head;
            for (int i = 0; i < count; i++)
            {
                q = q->next;
                free(q);
            }
        }
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            n = n->next;
        }
        for (int i = 0; i < index + 1; i++)
        {
            ptr = ptr->next;
        }
        for (int i = 0; i < index; i++)
        {
            q = q->next;
        }
        n->next = ptr;
        ptr->prev = n;
        free(q);
        return head;
    }
}

int MaxNum(struct node *head)
{
    struct node *headp = head;
    int max = head->data;
    while (head != NULL)
    {
        if (max < head->data)
        {
            max = head->data;
        }
        head = head->next;
    }
    return max;
}

/*	Main body function	*/
int main()
{
    /*	creating nodes	*/
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *n1 = (struct node *)malloc(sizeof(struct node));
    struct node *n2 = (struct node *)malloc(sizeof(struct node));

    /*	Initializing nodes data	*/
    head->data = 1;
    head->prev = NULL;
    head->next = n1;

    n1->data = 2;
    n1->prev = head;
    n1->next = n2;

    n2->data = 3;
    n2->prev = n1;
    n2->next = NULL;

    /*	calling both display functions	*/
    display_traversal(head);
    reversal_display_traversal(head);

    /*	Adding at node at beginning	*/
    head = add_beg(head);
    display_traversal(head);

    /*	adding new node at end of list 	*/
    head = add_end(head);
    display_traversal(head);

    /*	adding at index	*/
    head = add_index(head, 2);
    display_traversal(head);

    /*	Delete First node 	*/
    head = del_beg(head);
    display_traversal(head);

    /*	Delete at end	*/
    head = del_last(head);
    display_traversal(head);

    /*	Delete at index	*/
    head = del_index(head, 3);
    display_traversal(head);

    /*	highest number in list 	*/
    int max = MaxNum(head);
    display_traversal(head);
    printf("\nThe highest Number in list is : %d\n ", max);

    return 0;
}