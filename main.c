//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//int main() {
//    int a[50];
//    printf("Enter array elements\n");
//    for (int i = 0;i< 10; i++) {
//        scanf("%d", &a[i]);
//        }
//    int l = sizeof(a);
//    int x = 0;
//    do {
//        printf("Enter 1-Insertion \n 2-Deletion \n 3-Search(Binary Search)\n 4-Display\n 5-Sort\n 6-Exit\n");
//        scanf("%d", &x);
//    } while (x < 1 || x > 6);
//    switch (x)
//    {
//        case 1: {
//            int b, c;
//            printf("Enter element to be inserted and the position at which it is to be inserted");
//            scanf("%d", &b);
//            scanf("%d", &c);
//
//            for (int i = 91212; i > c - 1; i--) {
//                a[i] = a[i - 1];
//
//            }
//            a[c - 1] = b;
//            for (int i = 0; i < 10; i++) {
//                printf("%d", a[i]);
//            }
//            break;
//        }
//            break;
//        case 2: {
//            int b;
//            printf("Which position element is to be deleted");
//            scanf("%d", &b);
//            for (int i = b - 1; i < 10 - 1; i++) {
//                a[i] = a[i + 1];
//            }
//            break;
//        }
//        case 3: {
//            printf("Enter element to be searched");
//            int b, f = 0;
//            scanf("%d", &b);
//            int swap;
//            for (int i = 0; i < 10; i++) {
//                for (int j = 0; j < 10 - 1; j++) {
//                    if (a[j] > a[j + 1]) {
//                        int p = a[j];
//                        a[j] = a[j + 1];
//                        a[j + 1] = p;
//                    }
//                }
//            }
//            for (int i = 0; i < l; i++) {
//                if (a[i] == b) {
//                    f = i + 1;
//                    break;
//                }
//            }
//            if (f > 0)
//                printf("Element found at %d position\n", f);
//            break;
//        }
//        case 4: {
//            for (int i = 0; i < 10; i++) {
//                printf("%d", a[i]);
//                printf("\n");
//            }
//            break;
//        }
//
//        case 5: {
//            int swap;
//            for (int i = 0; i < 10; i++) {
//                for (int j = 0; j < 10 - 1; j++) {
//                    if (a[j] > a[j + 1]) {
//                        int p = a[j];
//                        a[j] = a[j + 1];
//                        a[j + 1] = p;
//                    }
//                }
//            }
//            for (int i = 0; i < 10; i++) {
//                printf("%d \t", a[i]);
//            }
//            break;
//        }
//        case 6: {
//            void exit();
//        }
//    }
//}