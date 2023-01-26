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

void Insert(struct Node *root, int key)
{
    struct Node *prev = NULL; // save the node of the root and then run another loop to check whether any of the child of this sub-tree contains the element or not

    while (root != NULL) // check if tree is not empty
    {
        prev = root;
        if (root->data == key) // check if the data itself is root, if yes, then return root
        {
            printf("Element %d already present", key);
            return;
        }
        else if (key < root->data) // check if element is less than root, then repeat the search for left sub-tree
        {
            root = root->left;
        }
        else if (key > root->data) // check if element is greater than root, then repeat the search for right sub-tree
        {
            root = root->right;
        }
    }
    struct Node *new = createNode(key);
    if (key < prev->data) // check if element is less than root, then insert the node in left sub-tree
    {
        prev->left = new;
    }
    else if (key > prev->data) // check if element is greater than root, then insert the node in right sub-tree
    {
        prev->right = new;
    }
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
              /
            65        //Inserted At this node
    */
    Insert(p, 65);
    // Insert(p, 40);  already the data is present so it will display a message
    printf("%d", p->right->left->right->data); // to check whether the new data is inserted or not
    return 0;
}