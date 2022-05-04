#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
        return 1;
    else
        return 0;
}

int isEmpty(struct queue *q)
{
    if (q->f == q->r)
        return 1;
    else
        return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
        printf("This Queue is Full\n");
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
        printf("\nThe Queue is Empty\n");
    else
    {
        q->f++;
        return q->arr[q->f];
    }
}

int main()
{
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    //isEmpty function
    if (isEmpty(&q))
        printf("\nQueue is Empty\n");
    else
        printf("\nQueue is Not Empty\n");

    //isFull Function
    if (isFull(&q))
        printf("\nQueue is Full\n");
    else
        printf("\nQueue is Not Full\n");

    // Enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 13);
    enqueue(&q, 18);

    //Dequeueing element
    printf("\nThe Dequed value is : %d \n", dequeue(&q));
    printf("\nThe Dequed value is : %d \n", dequeue(&q));
    printf("\nThe Dequed value is : %d \n", dequeue(&q));
    
    return 0 ;
}
