#include <stdio.h>
#include <stdlib.h>

/*	Structure Data type 	*/
struct node
{
    int data;
    struct node *next;
};

/*	Display Function 	*/
void display_Traversal(struct node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
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

void display_atIndex(struct node *head, int index)
{
    struct node *n = head;
    for (int i = 0; i < index; i++)
    {
        n = n->next;
    }
    printf("%d ", n->data);
}

/*	Reverse Display Function 	*/
void Rev_display_Traversal(struct node *head, int n)
{
    int prev[n];
    int i = 0;
    while (head != NULL)
    {
        if (i == n - 1)
        {
            prev[i] = head->data;
            i++;
            head->next = NULL;
        }
        else
        {
            prev[i] = head->data;
            i++;
            head = head->next;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", prev[i]);
    }
}

/*	Create Node Individually 	*/
struct node *createNode(int value)
{
    struct node *nod = (struct node *)malloc(sizeof(struct node));

    if (nod == NULL)
    {
        printf("Memory Allocation Failed . \n");
    }
    else
    {
        nod->data = value;
        nod->next = NULL;
        return nod;
    }
}

/*	Create Multiple Nodes 	*/
struct node *Create_MultipleNodes(int n)
{
    int i;
    int data;

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *nod = (struct node *)malloc((n) * sizeof(struct node));

    printf("\nInput The Data for Head Node : ");
    scanf("%d", &head->data);
    head->next = nod;

    for (int i = 1; i < n; i++)
    {
        printf("\nEnter the data for %d :- ", i + 1);
        scanf("%d", &nod->data);
        if (i == n - 1)
        {
            nod->next = NULL;
        }
        else
        {
            nod->next = nod + 1;
            nod++;
        }
    }
    return head;
}

/*	fucntion to add new node at beginning	*/
struct node *InsertAtBeginning(struct node *head, struct node *new_node)
{
    new_node->next = head;
}

/*	Function to add new node at end	*/
struct node *InsertAtEnd(struct node *head, int val)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    struct node *ptr = head;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
    new_node->next = NULL;
    return head;
}

/*	Function to add node at middle 	*/
struct node *InsertAtMiddle(struct node *head, int val)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    struct node *ptr = head;
    struct node *fptr = head;

    int count = no_of_nodes(head);
    for (int i = 0; i < count / 2; i++)
    {
        ptr = ptr->next;
    }
    for (int i = 0; i < (count / 2) + 1; i++)
    {
        fptr = fptr->next;
    }
    ptr->next = new_node;
    new_node->next = fptr;
    return head;
}

/*	function to insert at index 	*/
struct node *InsertAtindex(struct node *head, int index, int val)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    struct node *ptr = head;
    struct node *fptr = head;

    int count = no_of_nodes(head);

    if (index >= 0 && index < count)
    {
        for (int i = 0; i < index - 1; i++)
        {
            ptr = ptr->next;
        }
        for (int i = 0; i < index; i++)
        {
            fptr = fptr->next;
        }
        ptr->next = new_node;
        new_node->next = fptr;
        return head;
    }
}

/*	function to delete at beginning	*/
struct node *del_beg(struct node *head)
{
    struct node *n = head;
    head = head->next;
    free(n);
    return head;
}

/*	function to delete at middle	*/
struct node *del_mid(struct node *head)
{
    struct node *n = head;
    struct node *ptr = head;
    struct node *fptr = head;
    int count = no_of_nodes(head);

    for (int i = 0; i < (count / 2) - 1; i++)
    {
        ptr = ptr->next;
    }
    for (int i = 0; i < (count / 2) + 1; i++)
    {
        fptr = fptr->next;
    }
    for (int i = 0; i < count / 2; i++)
    {
        n = n->next;
    }
    ptr->next = fptr;
    free(n);
    return head;
}

/*	function to delete at end	*/
struct node *del_end(struct node *head)
{
    struct node *n = head;
    struct node *ptr = head;
    struct node *fptr = head;
    int count = no_of_nodes(head);

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    for (int i = 0; i < count - 2; i++)
    {
        fptr = fptr->next;
    }
    fptr->next = NULL;
    free(ptr);
    return head;
}

/*	function to delete at index	*/
struct node *del_index(struct node *head, int index)
{
    struct node *n = head;
    struct node *ptr = head;
    struct node *fptr = head;
    int count = no_of_nodes(head);

    if (index >= 0 && index < count)
    {
        for (int i = 0; i < index - 1; i++)
        {
            ptr = ptr->next;
        }
        for (int i = 0; i < index + 1; i++)
        {
            fptr = fptr->next;
        }
        for (int i = 0; i < index; i++)
        {
            n = n->next;
        }
        ptr->next = fptr;
        free(n);
        return head;
    }
}

/*	Adding New List at the end of previous list	*/
struct node *addList(struct node *head, struct node *head2)
{
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = head2;
    return head;
}

/*	Search value in list	*/
int search(struct node *head, int elem)
{
    int count = no_of_nodes(head);

    for (int i = 0; i < count; i++)
    {
        if (head->data == elem)
        {
            return i;
        }
        head = head->next;
    }
}

/*	Main Body	*/
int main()
{
    /*	Initializing Node space	*/
    struct node *n1 = (struct node *)malloc(sizeof(struct node));
    struct node *n2 = (struct node *)malloc(sizeof(struct node));
    struct node *n3 = (struct node *)malloc(sizeof(struct node));

    /*	Declarations	*/
    int n = 5;
    int value = 10;

    /*	Node Data Initializing	*/
    n1 = createNode(value);
    printf("%d ", n1->data);

    n2 = createNode(value);
    printf("%d ", n2->data);

    /*	Linking Nodes	*/
    n1->next = n2;
    display_Traversal(n1);

    /*	Creating Multiple Nodes with function	*/
    n3 = Create_MultipleNodes(n);
    display_Traversal(n3);

    /*	Displaying List in Reverse order	*/
    printf("\n");
    Rev_display_Traversal(n3, n);

    /*	Displaying Number of Nodes 	*/
    int count;
    count = no_of_nodes(n3);
    printf("\nThe number of nodes present is : %d \n", count);

    /*	Adding New Node at beginnig	*/
    struct node *New_node = createNode(6);
    n3 = InsertAtBeginning(n3, New_node);
    display_Traversal(n3);

    /*	Add Node at last 	*/
    n3 = InsertAtEnd(n3, 7);
    printf("\n");
    display_Traversal(n3);

    /*	Add node at middle	*/
    n3 = InsertAtMiddle(n3, 8);
    printf("\n");
    display_Traversal(n3);

    /*	Add node at index	*/
    n3 = InsertAtindex(n3, 4, 9);
    printf("\n");
    display_Traversal(n3);

    /*	Peek function	*/
    printf("\n");
    display_atIndex(n3, 4);
    printf("\n");

    /*	Delete at beginnig	*/
    n3 = del_beg(n3);
    display_Traversal(n3);

    /*	Delete at middle	*/
    n3 = del_mid(n3);
    printf("\n");
    display_Traversal(n3);

    /*	Delete at end	*/
    n3 = del_end(n3);
    printf("\n");
    display_Traversal(n3);

    /*	Delete at index	*/
    n3 = del_index(n3, 3);
    printf("\n");
    display_Traversal(n3);

    /*	Creating multiple nodes and adding to head node	*/
    struct node *n4;
    n4 = Create_MultipleNodes(5);
    addList(n3, n4);
    display_Traversal(n3);

    /*	Search Element in list	*/
    int indexLocation;
    indexLocation = search(n3, 1);
    printf("\nIndex = %d", indexLocation);

    return 0;
}