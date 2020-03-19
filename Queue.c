//#include <stdio.h>
//#include <stdlib.h>
//int queue[10],front=-1,rear=-1,size=10;
//void insertion();
//void deletion();
//void display();
//int main(){
//    int choice;
//    printf("Enter your choice : ");
//    scanf("%d", &choice);
//    printf("1.Insert element to queue \n");
//    printf("2.Delete element from queue \n");
//    printf("3.Display all elements of queue \n");
//    printf("4.Quit \n");
//    while (choice<=4)
//    {
//        switch (choice)
//        {
//            case 1:
//                insertion();
//                break;
//            case 2:
//                deletion();
//                break;
//            case 3:
//                display();
//                break;
//            case 4:
//                exit(1);
//            default:
//                printf("Wrong choice \n");
//        }
//    }
//}
//void insertion(){
//    if(rear==size-1){
//        printf("Overflow");
//    }
//    else {
//        if (front == - 1)
//            front = 0;
//        printf("Inset the element in queue : ");
//        int ele;
//        scanf("%d", &ele);
//        rear = rear + 1;
//        queue[rear] = ele;
//    }
//}
//void deletion()
//{
//    if (front == - 1 || front > rear)
//    {
//        printf("Queue Underflow \n");
//        return ;
//    }
//    else
//    {
//        printf("Element deleted from queue is : %d\n", queue[front]);
//        front = front + 1;
//    }
//}
//void display()
//{
//    if (front == - 1)
//        printf("Queue is empty \n");
//    else
//    {
//        printf("Queue is : \n");
//        for (int i = front; i <= rear; i++)
//            printf("%d ", queue[i]);
//        printf("\n");
//    }
//}