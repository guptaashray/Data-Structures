//#include <stdio.h>
//int main(){
//    int t=0,result[1000];
//    printf("Enter number of test cases");
//    scanf("%d", &t);
//    for(int i=0;i<t;i++){
//        int nos=0,candies=0,sum=0;
//        printf("Enter number of elephants and total number of candies");
//        scanf("%d%d\n", &nos, &candies);
//        int a[nos];
//        for(int i=0;i<nos;i++){
//            scanf("%d\n",&a[i]);
//        }
//        for(int i=0;i<nos;i++){
//            sum+=2+a[i];
//        }
//        if(sum<=candies)
//            result[i]=1;
//        else
//            result[i]=0;
//    }
//    for(int i=0;i<t;i++){
//        if(result[i]==1)
//            printf("Yes\n");
//        else
//            printf("No\n");
//    }
//    return 0;
//}