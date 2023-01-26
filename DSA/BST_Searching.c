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

int IsBST(struct Node *root)
{
    static struct Node *prev = NULL;
    if (root != NULL)
    {
        if (!IsBST(root->left)) // checks if the left sub-tree is a BST or not
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data) // checks if the new right root is lesser then the previous root
        {
            return 0;
        }
        else // when both left and right nodes are compared then the right child becomes new root and the original root becomes prev node
        {
            prev = root;
            return (IsBST(root->right));
        }
    }
    else // a null/empty tree is considered a BST
        return 1;
}

struct Node *Searching(struct Node *root, int key)
{
    if (root != NULL) //check if tree is not empty
    {
        if (root->data == key) // check if the data itself is root, if yes, then return root
        {
            return root;
        }
        if (root->data > key) // check if element is less than root, then repeat the search for left sub-tree
        {
            return (Searching(root->left, key));
        }
        if (root->data < key) // check if element is greater than root, then repeat the search for right sub-tree
        {
            return (Searching(root->right, key));
        }
    }
    else
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
       30       70
      /   \    /  \
    20    40  60   80
    */
    printf("This Is InOrder Traversal\n");
    InOrder(p);
    printf("\n\n");
    // printf("%d\n", IsBST(p));
    // struct Node *x = Searching(p, 42); //for element not present in tree
    struct Node *x = Searching(p, 40); // for element present in tree
    if (x != NULL)
    {
        printf("Element %d Found", x->data);
    }
    else
        printf("Element Not Found");
    return 0;
}