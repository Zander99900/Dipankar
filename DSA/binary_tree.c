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

void PreOrder(struct Node *root)
{
    if (root!= NULL)
    {
        printf("%d  ", root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

void InOrder(struct Node *root)
{
    if (root!= NULL)
    {
        InOrder(root->left);
        printf("%d  ", root->data);
        InOrder(root->right);
    }
}

void PostOrder(struct Node *root)
{
    if (root!= NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d  ", root->data);
    }
}

int main()
{
    struct Node *p = createNode(5);
    struct Node *p1 = createNode(2);
    struct Node *p2 = createNode(9);
    struct Node *p3 = createNode(7);
    struct Node *p4 = createNode(8);
    struct Node *p5 = createNode(4);
    struct Node *p6 = createNode(11);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;
//visual representation of the above tree
/*
        5
      /   \
    2       9
  /   \   /   \ 
 7    8  4    11
*/

    printf("This Is PreOrder Traversal\n");
    PreOrder(p);
    printf("\n\n");
    printf("This Is InOrder Traversal\n");
    InOrder(p);
    printf("\n\n");
    printf("This Is PostOrder Traversal\n");
    PostOrder(p);
    return 0;
}