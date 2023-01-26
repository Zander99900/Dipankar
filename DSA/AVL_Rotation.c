#include <stdio.h>
#include <malloc.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    int height;
};

// max function is used to comapare which node is heavy (contains more nodes)
int max(int a, int b)
{
    return a > b ? a : b; // if a>b then return a, else return b (ternary operator used)
}

// returns the height of the tree
int getHeight(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    return root->height;
}

// Checks if the AVL tree is balanced or not
int BalanceFactor(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return getHeight(root->left) - getHeight(root->right);
}

struct Node *createNode(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node)); // creates the node of this size from heap
    n->data = data;
    n->left = NULL; // basic node is ready
    n->right = NULL;
    n->height = 1; // whenever a node is created , the height is updated
    return n;
}

struct Node *RightRotate(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *T2 = x->right;
    // rotation
    x->right = y;
    y->left = T2;
    // update height of x & y
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1; // 1+ is written because 1 is considered as the height of node itself and it wil add to the height of its sub-nodes
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;

    return x;
}

struct Node *LeftRotate(struct Node *x)
{
    struct Node *y = x->right;
    struct Node *T2 = x->left;
    // rotation
    y->left = x;
    x->right = T2;
    // update height of x & y
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1; // 1+ is written because 1 is considered as the height of node itself and it wil add to the height of its sub-nodes
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;

    return y;
}

struct Node *Insert(struct Node *root, int key)
{
    if (root == NULL){
        return createNode(key); // if the node is null, then update it with the new node created
    }
    else if (key < root->data){ // check if element is less than root, then repeat the search for left sub-tree
        root->left = Insert(root->left, key);
    }
    else if (key > root->data){ // check if element is greater than root, then repeat the search for right sub-tree
        root->right = Insert(root->right, key);
    }
    // we find the height of tree by comapring left and right nodes
    root->height = 1 + max(getHeight(root->left), getHeight(root->right)); // 1+ is written because 1 is considered as the height of root itself and it wil add to the height of iits nodes
    int balance = BalanceFactor(root);

    // left left rotation
    if (balance > 1 && key < root->left->data){
        return RightRotate(root);
    }

    // left right rotation
    if (balance < -1 && key > root->left->data){
        return LeftRotate(root);
    }
    // right left rotation
    if (balance > 1 && key < root->left->data){
        root->left = LeftRotate(root->left);
        return RightRotate(root);
    }
    // right right rotation
    if (balance < -1 && key > root->left->data){
        root->right = RightRotate(root->right);
        return LeftRotate(root);
    }
    return root;
}

void PreOrder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d  ", root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

int main()
{
    struct Node *root = NULL;
    root = Insert(root, 50);
    root = Insert(root, 30);
    root = Insert(root, 70);
    root = Insert(root, 20);
    root = Insert(root, 40);
    root = Insert(root, 60);
    root = Insert(root, 80);
    root = Insert(root, 65);

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
    PreOrder(root);
    return 0;
}