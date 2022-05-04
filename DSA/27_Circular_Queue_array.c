#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct circularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
        return 1;
    else
        return 0;
}

int isEmpty(struct circularQueue *q)
{
    if (q->f == q->r)
        return 1;
    else
        return 0;
}

void enqueue(struct circularQueue *q, int val)
{
    if (isFull(q))
        printf("This Queue is Full\n");
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
    }
}

int dequeue(struct circularQueue *q)
{
    int a = -1;
    if (isEmpty(q))
        printf("\nThe Queue is Empty\n");
    else
    {
        q->f = (q->f + 1) % q->size;
        return q->arr[q->f];
    }
}

int main()
{
    struct circularQueue q;
    q.size = 4;
    q.f = q.r = 0;
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

    enqueue(&q, 13);
    enqueue(&q, 185);
    enqueue(&q, 184);
    enqueue(&q, 181);
    enqueue(&q, 182);

    printf("\nThe Dequed value is : %d \n", dequeue(&q));
    printf("\nThe Dequed value is : %d \n", dequeue(&q));

    enqueue(&q, 185);
    enqueue(&q, 184);
 
    printf("\nThe Dequed value is : %d \n", dequeue(&q));
    printf("\nThe Dequed value is : %d \n", dequeue(&q));
   
    enqueue(&q, 182);

    printf("\nThe Dequed value is : %d \n", dequeue(&q));
    printf("\nThe Dequed value is : %d \n", dequeue(&q));

    return 0;
}
