//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include <string.h>
//int size=100;
//char stack[100];
//int top=-1;
//void push(char item)
//{
//    if(top>=size-1)
//    {
//        printf("\nOverflow");
//    }
//    else{
//        top=top+1;
//        stack[top]=item;
//    }
//}
//char pop()
//{
//    char item;
//    if(top<0)
//    {
//        printf("Stack underflow");
//    }
//    else{
//        item=stack[top];
//        top=top-1;
//        return item;
//    }
//}
//int isoperator(char op)
//{
//    if(op=='^'|| op=='*' || op=='/' || op=='+'|| op=='-'){
//        return 1;
//    }
//    else
//        return 0;
//}