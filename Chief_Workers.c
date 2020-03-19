//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//int main(){
//    int T=0;
//    scanf("%d",&T);
//    int NoOfOpr[100];
//    for (int i = 0; i< T ; i++) {
//        int N,W[10000];
//        scanf("%d\n",&N);
//        for (int i = 0; i <N ; i++) {
//            scanf("%d",&W[i]);
//        }
//        int a=W[0];
//        int b=W[0];
//        for(int i=0;i <N;i++){
//            if(W[i]>a)
//                a=W[i];
//            if(W[i]<b)
//                b=W[i];
//        }
//        NoOfOpr=a-b+1;
//    }
//    for (int j = 0; j<T;j++){
//        if(NoOfOpr[j]==1){
//            NoOfOpr[j]=NoOfOpr[j]-1;
//            printf("%d\n",NoOfOpr[j]);
//        }
//        else{
//            printf("%d\n",NoOfOpr[j]);
//        }
//    }
//    return 0;
//}