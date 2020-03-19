//#include <stdio.h>
//#include <stdlib.h>
//int stack[100],choice,top,n;
//void push()
//{
//    if(top>=n-1)
//    {
//        printf("Stack Overflow");
//    }
//    else {
//        int x;
//        printf("Enter a value to be pushed");
//        scanf("%d", &x);
//        top++;
//        stack[top] = x;
//    }
//}
//int pop()
//{
//    if(top<=-1)
//    {
//        printf("Stack is underflow");
//    }
//    else
//    {
//        printf("The popped element is %d",stack[top]);
//        return stack[top];
//        top--;
//    }
//}
//void display()
//{
//    if(top>=0)
//    {
//        printf("The elements in the stack are");
//        for(int i=0;i<=top;i++)
//        {
//            printf("%d\t",stack[i]);
//        }
//    } else{
//        printf("The stack is empty");
//    }
//}
//void main(){
//    printf("Enter no. of elements to be entered");
//    int n;
//    scanf("%d",&n);
//    for (int i = 0; i <n ; ++i) {
//        push();
//    }
//
//}