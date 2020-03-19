//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//void push(char );
//void pop();
//bool isMatchingPair(char ,char);
//char stack[20],top=-1,flag;
//int main(){
//    char c[50];
//    printf("Enter expression");
//    gets(c);
//    int l= (int)strlen(c);
//    printf("%d\n",l);
//    for (int i = 0; i < l; i++) {
//        char ch =(char)c[i];
//        if (ch == '[' || ch == '{' || ch == '(')
//            push(ch);
//        else if ( ch == ']' || ch == '}' || ch == ')'){
//            if(isMatchingPair(ch,stack[top])){
//                pop();
//                flag=1;
//            }
//            else{
//                flag=0;
//                break;
//            }
//        }
//        else
//            continue;
//    }
//    if (flag==1)
//        printf("Correct sequence");
//    else
//        printf("Incorrect sequence");
//}
//void push(char ele){
//        stack[++top]=ele;
//}
//void pop(){
//        top--;
//}
//bool isMatchingPair(char character1, char character2)
//{
//    if (character1 == '(' && character2 == ')')
//        return 1;
//    else if (character1 == '{' && character2 == '}')
//        return 1;
//    else if (character1 == '[' && character2 == ']')
//        return 1;
//    else
//        return 0;
//}