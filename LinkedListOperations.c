//#include<stdio.h>
//#include<stdlib.h>
//#include <stdbool.h>
//struct node{
//    int data;
//    struct node*  next;
//};
//void push(struct node **head_ref,int new_data)
//{
//    struct node* new_node=(struct node*)malloc(sizeof(struct node));
//    new_node->data=new_data;
//    new_node->next=*head_ref;
//    *head_ref=new_node;
//}
//
//void insertAfter(struct node *prev_node, int new_data)
//{
//    if(prev_node==NULL)
//    {
//        printf("The previous node cannot be null");
//        return;
//    }
//    struct node* new_node=(struct node*)malloc(sizeof(struct node));
//    new_node->data=new_data;
//    new_node->next=prev_node->next;
//    prev_node->next=new_node;
//}
//
//void append(struct node **head_ref,int new_data)
//{
//    struct node* new_node=(struct node*)malloc(sizeof(struct node));
//    struct node* last=*head_ref;
//    new_node->data=new_data;
//    new_node->next=NULL;
//    if(*head_ref==NULL)
//    {
//        *head_ref=new_node;
//    }
//    while(last->next!=NULL)
//    {
//        last=last->next;
//    }
//    last->next=new_node;
//    return;
//}
//
//void delete_Node_key(struct node **head_ref,int key)
//{
//    struct node* temp=(struct node*)malloc(sizeof(struct node));
//    struct node* prev=NULL;
//
//    if (temp!=NULL && temp->data==key)
//    {
//        *head_ref =temp->next;
//        free(temp);
//        return;
//    }
//    else if(temp!=NULL && temp->data!=key)
//    {
//        while(temp!=NULL && temp->data!=key)
//        {
//        prev->next=temp->next;
//        temp=temp->next;
//        }
//        if(temp!=NULL && temp->data==key)
//        {
//            prev->next=temp->next;
//            free(temp);
//            return;
//        }
//    }
//    else
//    {
//        if(temp==NULL)
//        {
//            printf("Key not found");
//            return;
//        }
//    }
//}
//
//void delete_Node_pos(int **head_ref,int pos)
//{
//    if(*head_ref==NULL)
//    {
//        return;
//    }
//    struct node* temp=*head_ref,*prev;
//    if(pos==0)
//    {
//        *head_ref = temp->next;
//        free(temp);
//        return;
//    }
//    for (int i = 0; temp!=NULL && i<pos-1 ; ++i) {
//        prev->next=temp->next;
//        temp=temp->next;
//    }
//    if(temp==NULL||temp->next==NULL)
//    {
//        return;
//    }
//    prev->next=temp->next;
//    free(temp);
//}
//
//void print_list(struct node* head_ref)
//{
//    while(head_ref!=NULL)
//    {
//        printf("%d",head_ref->data);
//        head_ref=head_ref->next;
//    }
//}
//
//bool search(struct node* head, int x)
//{
//    struct node* current=head;
//    while(current!=NULL)
//    {
//        if(current->next == x)
//            return true;
//        current=current->next;
//    }
//    return false;
//}
//int main() {
//struct node *head=NULL;
//push(&head,7);
//push(&head,8);
//push(&head,9);
//push(&head,1);
//print_list(&head);
//delete_Node_key(&head,9);
//return 0;
//}
//
