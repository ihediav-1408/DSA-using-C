//1.WAP to implement binary tree using array and LL and also traverse the tree in recursive function
//and non recursive function
#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int data;
    struct tree *lc, *rc;
};
void buildtree(struct tree *ptr)
{
    int ch;
    struct node *new;
    printf("Enter the value of root node.\n");
    scanf("%d",&ptr->data);
    ptr->lc=NULL;
    ptr->rc=NULL;
    printf("Do you want to enter a left child of %d?(0/1)\n",ptr->data);
    scanf("%d",&ch);
    if(ch==1)
    {
        new=(struct tree*)malloc(sizeof(struct tree));
        ptr->lc=new;
        buildtree(new);
    }
    printf("Do you want to enter a right child of %d?(0/1)\n",ptr->data);
    scanf("%d",&ch);
    if(ch==1)
    {
        new=(struct tree*)malloc(sizeof(struct tree));
        ptr->rc=new;
        buildtree(new);
    }
}
void in_traversal(struct tree *ptr)
{
    if(ptr==NULL)
    {
        return;
    }
    else
    {
        in_traversal(ptr->lc);
        printf("%d\t",ptr->data);
        in_traversal(ptr->rc);
    }
}
void pre_traversal(struct tree *ptr)
{
    if(ptr==NULL)
    {
        return;
    }
    else
    {
        printf("%d\t",ptr->data);
        pre_traversal(ptr->lc);
        pre_traversal(ptr->rc);
    }
}
void post_traversal(struct tree *ptr)
{
    if(ptr==NULL)
    {
        return;
    }
    else
    {
        post_traversal(ptr->lc);
        post_traversal(ptr->rc);
        printf("%d\t",ptr->data);
    }
}
void main()
{
    int c;
    struct tree *root;
    root=(struct tree *)malloc(sizeof(struct tree));
    buildtree(root);
    printf("\nMENU:\n");
    printf("1.Execute InOrder Traversal.\n");
    printf("2.Execute PreOrder Traversal.\n");
    printf("3.Execute PostOrder Traversal.\n");
    printf("Enter your choice.\n");
    scanf("%d",&c);
    printf("\nTHE TREE IS AS FOLLOWS:\n");
    switch(c)
    {
        case 1:
        in_traversal(root);
        break;
        case 2:
        pre_traversal(root);
        break;
        case 3:
        post_traversal(root);
        break;
        default:
        exit;
    }
}