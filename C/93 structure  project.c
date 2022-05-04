// write a function sumvector which returns the sum of two vectors passed to it . the vector must be two dimensional .

#include <stdio.h>
#include <string.h>

struct vector
{
    int x;
    int y;
};

struct vector sumvector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
};

int main()
{
    struct vector v1, v2, sum;

    v1.x = 4;
    v1.y = 5;

    v2.x = 7;
    v2.y = 8;

    sum = sumvector(v1, v2);
    printf("x dim of result is %d , and y dim of result is %d", sum.x, sum.y);
}