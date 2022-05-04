#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));

    n->data = data;
    n->left = NULL;
    n->right = NULL;
};

int main()
{
    // constructing root node
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = 7;
    p->left = NULL;
    p->right = NULL;

    // constructing second node
    struct node *p1 = (struct node *)malloc(sizeof(struct node));
    p1->data = 2;
    p1->left = NULL;
    p1->right = NULL;

    // constructing third node
    struct node *p2 = (struct node *)malloc(sizeof(struct node));
    p2->data = 4;
    p2->left = NULL;
    p2->right = NULL;

    //Linking Node
    p->left = p1;
    p->right = p2;

    /* Binary Tree for Upper code 
            7
           / \
          2  4
    */

    //Next way to implement upper code is
    struct node *q = createNode(7);
    struct node *q1 = createNode(2);
    struct node *q2 = createNode(4);

    //Linking Node
    q->left = q1;
    q->right = q2;

    return 0;
}