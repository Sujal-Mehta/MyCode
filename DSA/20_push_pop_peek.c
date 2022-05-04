#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        // printf("stack overflow\n");
        return 0;
    }
    else
    {
        // printf("Stack has empty space\n");
        return 1;
    }
}

int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        // printf("Stack underflow\n");
        return 0;
    }
    else
    {
        // printf("Stack is not empty\n");
        return 1;
    }
}

void push(struct stack *ptr, int value)
{
    if (isfull(ptr))
    {
        ptr->top = ptr->top + 1;
        ptr->arr[ptr->top] = value;
        printf("%d has been inserted in stack \n", value);
    }
    else
    {
        printf("\nstack overflow\n");
    }
}

int pop(struct stack *ptr)
{
    int value;
    if (isempty(ptr))
    {
        value = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        printf("%d has been removed from stack \n", value);
    }
    else
    {
        printf("stack underflow\n");
    }
}

int peek(struct stack *ptr, int n)
{
    if (ptr->top - n + 1 < 0)
    {
        printf("Not a valid position");
        return 0;
    }
    else
    {
        return ptr->arr[ptr->top - n + 1];
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack)); //obj creation dynamically

    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int)); //array making

    printf("\nStack has been created sucessfull with an array of size 10 !\n");

    push(sp, 10);
    push(sp, 200);
    push(sp, 400);
    push(sp, 600);
    push(sp, 800);
    pop(sp);
    pop(sp);

    //applying peek for all elements
    for (int i = 1; i <= sp->top + 1; i++)
    {
        printf("The value at position %d is %d\n", i, peek(sp, i));
    }

    return 0;
}