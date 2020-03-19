//#include <stdio.h>
//int push(int ,int ,int ,int*);
//int pop(int );
//void display();
//int main() {
//    int top=-1,size;
//    int n;
//    printf("Enter size of Stack");
//    scanf("%d", &n);
//    size = n;
//    int stack[n];
//    int* fstack;
//    int choice;
//    do {
//        printf("Enter 1 for push and 2 for pop");
//        scanf("%d", &choice);
//        switch (choice) {
//            case 1:
//                printf("Enter Element");
//                int ele;
//                scanf("%d", &ele);
//                fstack=push(ele,top,size,stack);
//                display(top,fstack);
//                break;
//            case 2:printf("Enter Element");
//                int x =pop(top);
//                top=x;
//                display(top,fstack);
//                break;
//        }
//    }
//    while (choice!=0);
//    return 0;
//}
//
//int push(int ele,int top,int size,int *s)
//{
//    if (top==size-1)
//        printf("Overflow");
//    else{
//        s[++top]=ele;
//        return s;
//    }
//}
//int pop(int top)
//{
//    if(top==-1)
//        printf("Underflow");
//    else {
//        top--;
//        return top;
//    }
//}
//void display(int *s,int top)
//{
//    if(top>=0)
//    {
//        printf("\n The elements in STACK \n");
//        for(int i=top; i>=0; i--)
//            printf("\n%d",s[i]);
//    }
//    else
//    {
//        printf("\n The STACK is empty");
//    }
//}
