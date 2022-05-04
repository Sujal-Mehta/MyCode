/*
    Deletion in Binary Search Tree 

        condition 1 : When the node is leaf node . 
            ->  Search The Node 
            ->  Delete The Node 
        
        condition 2 : When the node is a non leaf node . 
            ->  Either Replaced By 
                -Inorder Pre 
                    or 
                -Inorder Post
        
        condition 3 : When the node is itself root node . 
            ->  Search for the node
            ->  Search for inorder pre or inorder post
            ->  keep doing this until the tree has no empty nodes .
*/

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

struct node *inOrderPredecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *delete_node(struct node *root, int value)
{
    struct node *iPre;

    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }

    // Search for the node to be deleted
    if (value < root->data)
    {
        root->left = delete_node(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = delete_node(root->right, value);
    }

    //  Deletion Strategy when the node is found
    else
    {
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = delete_node(root->left, iPre->data);
    }
    return root;
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

    InOrder(q);
    delete_node(q, 4);
    printf("\n");
    InOrder(q);

    return 0;
}
