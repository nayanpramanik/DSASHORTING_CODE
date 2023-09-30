#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

typedef struct st{
    struct st *lptr;
    int info;
    struct st *rptr;
}node;

node *root;

int createnode(int data)
{
    node *ptr;
    ptr->lptr=NULL;
    ptr->info=data;
    ptr->rptr=NULL;

    return ptr;
}

int preorder()
{
        if(root!=NULL){
        printf("%d ", root->info);
        preOrder(root->lptr);
        preOrder(root->rptr);
        }
}

int postorder()
{
    if(root!=NULL)
    {
        postorder(root->lptr);
        postorder(root->rptr);
        printf("%d ",root->info);
    }
}

int inorder()
{
    if(root!=NULL)
    {
        inorder(root->lptr);
        printf("%d", root->info);
        inorder(root->rptr);
    }
}

