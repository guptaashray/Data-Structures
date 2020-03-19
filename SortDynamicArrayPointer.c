////Write a C program to input elements in an array (dynamic array) and sort array using pointers.
////Example
////Input-
////Input array elements: 10 -1 0 4 2 100 15 20 24 -5
////Output-
////Array in ascending order: -5, -1, 0, 2, 4, 10, 15, 20, 24, 100,
////Array in descending order: 100, 24, 20, 15, 10, 4, 2, 0, -1, -5,
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//    printf("Enter number of elements of an array");
//    int n;
//    scanf("%d",&n);
//    int *ptr;
//    ptr=(int *)malloc(n*sizeof(int));
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",ptr+i);
//    }
//    int t;
//    for (int i = 0; i < n; i++) {
//
//        for (int j = i + 1; j < n; j++) {
//
//            if (*(ptr + j) < *(ptr + i)) {
//
//                t = *(ptr + i);
//                *(ptr + i) = *(ptr + j);
//                *(ptr + j) = t;
//            }
//        }
//        printf("Array in ascending order\n");
//        for (int i=0;i<n;i++)
//        {
//            printf("%d\t",*(ptr+i));
//        }
//        printf("Array in descending order\n");
//        ptr=ptr+n-1;
//        for(int i=0;i<n;i++)
//        {
//            printf("%d\t",*(ptr-i));
//        }
//    }
//    return 0;
//}