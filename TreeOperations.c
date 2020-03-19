#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node* right;
}*root=NULL;
void insert(int item)
{
    struct node *t= (struct node*)malloc(sizeof(struct node));
    t=root;
    t->data=item;
    t->left=NULL;
    t->right=NULL;
    if(root==NULL){
        root=t;
    }
    else{
        struct node*curr=root, *p= NULL;
        while (curr){
            p=curr;
            if(t->data<item)
                curr=curr->left;
            else
                curr=curr->right;
        }
        if(t->data> p->data)
        {
            p->right=t;
        }
        else{
            p->left=t;
        }
    }
}
struct node* findMin(struct node *t){
    while(t->left!=NULL){
        t=t->left;
    }
}
struct node* search(struct node*parent, int item, struct node *curr)
{
    while(curr!=NULL&&curr->data!=item){
        parent=curr;
        if(item>curr->data)
            curr=curr->right;
        else
            curr=curr->left;
    }
}
void delete(int item){
    struct node* parent=NULL;
    struct node*curr=root;
    search(parent,item,curr);
    if(curr==NULL)
        return;
    if(curr->left==NULL&&curr->right==NULL){
        if(curr!=root)
        {
            if(parent->left==curr)
                parent->left=NULL;
            else
                parent->right=NULL;
        } else{
            root=NULL;
        }
        free(curr);
    }
    else if(curr->right&&curr->left)
    {
        struct node* succ=findMin(curr->right);
        int val=succ->data;
        delete(val);
        curr->data=val;
    }
    else
    {
        struct node*child=curr->left?curr->left:curr->right;
        if(curr!=root){
            if(curr==parent->left){
                parent->left=child;
            }
            else
            {
                parent->right=child;
            }
        }
        else{
            root=child;
            free(curr);
        }
    }
}
void preorder(struct node*t){
    if(t==NULL)
        return;
    else
    {
        printf("%d",t->data);
        preorder(t->left);
        preorder(t->right);
    }
}
void inorder(struct node *t)
{
    if(t==NULL)
        return;
    else{
        inorder(t->left);
        printf("%d",t->data);
        inorder(t->right);
    }
}
void postorder(struct node *t)
{
    if(t==NULL)
        return;
    else{
        postorder(t->left);
        postorder(t->right);
        printf("%d",t->data);
    }
}
int height(struct node*t){
    if(t==NULL)
    {
        return 0;
    }
    else{
        int lh,rh;
        lh=height(t->left);
        rh=height(t->right);
        if(lh>rh)
            return(lh+1);
        else
            return(rh+1);
    }
}
