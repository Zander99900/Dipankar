#include <stdio.h>
#include <malloc.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *n;
    n = (struct Node *)malloc(sizeof(struct Node)); // creates the node of this size from heap
    n->data = data;
    n->left = NULL; // basic node is ready
    n->right = NULL;
    return n;
}

void InOrder(struct Node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        printf("%d  ", root->data);
        InOrder(root->right);
    }
}
struct Node *InorderPredecessor(struct Node *root)
{
    root = root->left;
    if (root->right != NULL)
    {
        root = root->right; // this one searches for the previous element that would appear before key element if we perform an inorder traversal
    }
    return root;
}
struct Node *DeleteNode(struct Node *root, int key)
{
    struct Node *InPre;
    if (root != NULL) // check if tree is not empty
    {
        if (root->left == NULL && root->left == NULL) // if the node is a leaf node, then delete the entire node and link NULL to it's parent node
        {
            free(root);
            return NULL;
        }
        // Main deletion operation
        if (root->data == key) // check if the data itself is root, if yes, then delete root and replace it with it's inorder predecessor
        {
            InPre = InorderPredecessor(root);
            root->data = InPre->data;
            DeleteNode(root->left, InPre->data);
        }
        else if (key < root->data) // finds the element to be deleted in left sub-tree
        {
            root->left = DeleteNode(root->left, key);
        }
        else if (key > root->data) // finds the element to be deleted in right sub-tree
        {
            root->right = DeleteNode(root->right, key);
        }
        return root;
    }
    else // for empty tree
        return NULL;
}

int main()
{
    struct Node *p = createNode(50);
    struct Node *p1 = createNode(30);
    struct Node *p2 = createNode(70);
    struct Node *p3 = createNode(20);
    struct Node *p4 = createNode(40);
    struct Node *p5 = createNode(60);
    struct Node *p6 = createNode(80);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;
    /* visual representation of the above tree
     A Binary Search tree example

           50                  //Left Node is always less than root
         /     \               //Right Node is always greater than root
       30        70
      /   \    /    \
    20    40  NULL   80      //Deleted At this node
    */
    // Types Of Deletion

    // 1. Deletion Of Leaf Node
    DeleteNode(p, 60); // for 60, it is just a leaf node, so it will simply free the node containing 60, and link the left of 70 as NULL

    // 2. Deletion of parent Node
    DeleteNode(p, 30); // for 30, it is a parent node, so it will delete the data of node containing 30, and replace it's value with it's right child as it maintains the condition for BST
    /*     A Binary Search tree example

           50                  //Left Node is always less than root
         /     \               //Right Node is always greater than root
       40       70
      /        /  \
    20        60   80      //Deleted At this node
    */

    // 3. Deletion of Root
    DeleteNode(p, 50); /*for 50, it is a root node, so it will delete the data of root node  and , and replace it's value with it's Inorder Predecessor (40) as it maintains the condition for BST
    after replacing, it frees the original node containing 40, so as to avoid Duplicacy which also violates the condition for BST
    A Binary Search tree example

           40                  //Deleted At this node
         /    \
       30      70
      /       /  \
    20       60   80
    */
    InOrder(p);
    return 0;
}