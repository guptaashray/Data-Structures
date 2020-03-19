//#include <stdio.h>
//#include <conio.h>
//#include<stdlib.h>
//struct node{
//    int data;
//    struct node*left;
//    struct node*right;
//    int ht;
//}*root=NULL;
//int balfact(struct node*t){
//    if(t==NULL)
//        return 0;
//    int lh,rh;
//    if(t->left==NULL)
//        lh=0;
//    else{
//        lh=t->left->ht;
//    }
//    if(t->right==NULL)
//        rh=0;
//    else{
//        rh=t->right->ht;
//    }
//    return(rh-lh);
//}
//int height(struct node*t){
//    if(t==NULL)
//    {
//        return 0;
//    }
//    else{
//        int lh,rh;
//        lh=height(t->left);
//        rh=height(t->right);
//        if(lh>rh)
//            return(lh+1);
//        else
//            return(rh+1);
//    }
//}
//struct node* insert(struct node*t,int ele){
//    if(t==NULL){
//
//        t->data=ele;
//        t->left=NULL;
//        t->right=NULL;
//    }
//    else if(ele>t->data)
//    {
//        t->right=insert(t->right,ele);
//        if(balfact(t)==-2)
//        {
//            if(ele>t->right->data)
//                t=RR(t);
//            else
//                t=RL(t);
//        }
//    }
//    else if(ele<t->data)
//    {
//        t->left=insert(t->left,ele);
//        if(balfact(t)==2)
//        {
//            if(ele>t->left->data)
//                t=LL(t);
//            else
//                t=LR(t);
//        }
//    }
//    t->ht=height(t);
//    return t;
//}
//struct node *rotateright(struct node*t){
//    struct node*y;
//    y=t->left;
//    t->left=y->right;
//    y->right=t->left;
//
//    t->ht=height(t);
//    y->ht=height(y);
//
//     return(y);
//}
//struct node *rotateleft(struct node*t){
//    struct node*y;
//    y=t->right;
//    t->right=y->left;
//    y->left=t->right;
//
//    t->ht=height(t);
//    y->ht=height(y);
//
//    return(y);
//}
//
