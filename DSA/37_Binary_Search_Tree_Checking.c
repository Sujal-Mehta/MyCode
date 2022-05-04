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

int InOrder(struct node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        printf("%d", root->data);
        InOrder(root->right);
    }
}

int isBST(struct node *root)
{
    static struct node *prev = NULL;

    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        isBST(root->right);
    }
    else
    {
        return 1;
    }
}

int main()
{

    /*
                5
               / \
              3  6
             / \
            1  4
    */

    struct node *q = createNode(5);
    struct node *q1 = createNode(3);
    struct node *q2 = createNode(6);
    struct node *q3 = createNode(1);
    struct node *q4 = createNode(4);

    //Linking Node
    q->left = q1;
    q->right = q2;
    q1->left = q3;
    q1->right = q4;

    printf("\n");
    InOrder(q);

    printf("\n");
    printf("%d", isBST(q));

    return 0;
}