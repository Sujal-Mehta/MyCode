/*	What is an AVL Tree ? 
    -   Height balanced binary search trees 
    -   Height difference between heights of left and right subtrees for every node is less than or equal to 1 . 
    -   Balanced factor = Height of right subtree - Height of left subtree 
    -   Can be -1 , 0 or 1 for a node to be balanced in a Binary Search Tree 
    -   Can be -1 , 0 or 1 for all nodes of an AVL tree 
*/

/*	Balancing a AVL tree after insertion
        1.  For a left-left insertion - Right rotate once wrt the first imbalanced node .
        2.  For a right-right insertion - Left rotate once wrt the first imbalanced node .
        3.  For a Left-Right insertion - Left rotate once and then right rotate once .
        4.  For a Right-Left insertion - Right rotate once and then left rotate once . 
*/
