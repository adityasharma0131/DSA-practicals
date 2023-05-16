#include <stdio.h>
#include <stdlib.h>

struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
}*root=NULL;

//Function Prototype
void preorder(struct btnode*);
void postorder(struct btnode*);
void inorder(struct btnode*);

struct btnode*newnode(int value)
{
    struct btnode* node=(struct btnode*)malloc(sizeof(struct btnode));
    node->value=value;
    node->l=NULL;
    node->r=NULL;
    return(node);
}

int main()
{
    root=newnode(50);
    root->l=newnode(20);
    root->r=newnode(30);
    root->l->l=newnode(70);
    root->l->r=newnode(80);
    root->l->r->r=newnode(60);
    root->l->l->l=newnode(10);
    root->l->l->r=newnode(40);
    
    printf("Tree elements displayed in\n");
    printf("\nPre-order are : ");
    preorder(root);
    printf("\nPost-order are : ");
    postorder(root);
    printf("\nIn-order are : ");
    inorder(root);
}

void preorder(struct btnode* t)
{
    if(t!=NULL)
    {
        printf("%d -> ",t->value);
        preorder(t->l);
        preorder(t->r);
    }
}

void postorder(struct btnode* t)
{
    if(t!=NULL)
    {
        postorder(t->l);
        postorder(t->r);
        printf("%d -> ",t->value);
    }
}

void inorder(struct btnode* t)
{
    if(t!=NULL)
    {
        inorder(t->l);
        printf("%d -> ",t->value);
        inorder(t->r);
    }
}
