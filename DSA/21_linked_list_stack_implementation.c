#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int isfull(struct node *top)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    free(temp);
}

int isempty(struct node *top)
{
    if (top == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

struct node *push(struct node *top, int val)
{
    if (isfull(top))
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = val;
        temp->next = top;
        top = temp;
        return top;
    }
    else
    {
        printf("stack overflow");
    }
}

int pop(struct node **top)
{
    if (isempty(top))
    {
        struct node *temp = *top;
        (*top) = (*top)->next;
        int x = temp->data;
        free(temp);
        return x;
    }
    else
    {
        printf("stack underflow");
    }
}

void linkedlisttraversal(struct node *top)
{
    while (top != NULL)
    {
        printf("pushed Element = %d\n", top->data);
        top = top->next;
    }
}

int main()
{
    struct node *top = NULL;

    top = push(top, 8);
    top = push(top, 9);
    top = push(top, 7);
    linkedlisttraversal(top);

    printf("\n");

    int element = pop(&top);
    printf("Element poped is  = %d\n", element);

    printf("\n");

    linkedlisttraversal(top);

    return 0;
}
