//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//struct node{
//    int data;
//    struct node *next;
//}*top=NULL;
//void push(int ele)
//{
//    struct node* t=(struct node*)malloc(sizeof(struct node));
//    t->data=ele;
//        t->next=top;
//        top=t;
//}
//int pop()
//{
//    struct node*t;
//
//    if(top==NULL)
//    {
//        printf("Stack is empty");
//        return 0;
//    }
//
//    else{
//        t=top;
//        top=top->next;
//        int x=t->data;
//        free(t);
//        return (x);
//    }
//}
//void display_stack(){
//    struct node*t=top;
//    for(;t!=NULL;t=t->next){
//        printf("%d",t->data);
//    }
//
//}