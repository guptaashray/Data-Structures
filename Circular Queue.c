////Circular Queue works by the process of circular increment i.e. when we try to increment any variable and we reach the end of queue, we start from the beginning of queue by modulo division with the queue size.
////
////i.e.
////
////if REAR + 1 == 5 (overflow!), REAR = (REAR + 1)%5 = 0 (start of queue)
////circular increment in circular queue
////Queue operations work as follows:
////
////Two pointers called FRONT and REAR are used to keep track of the first and last elements in the queue.
////When initializing the queue, we set the value of FRONT and REAR to -1.
////On enqueing an element, we circularly increase the value of REAR index and place the new element in the position pointed to by REAR.
////On dequeueing an element, we return the value pointed to by FRONT and circularly increase the FRONT index.
////Before enqueing, we check if queue is already full.
////Before dequeuing, we check if queue is already empty.
////When enqueing the first element, we set the value of FRONT to 0.
////When dequeing the last element, we reset the values of FRONT and REAR to -1.
////However, the check for full queue has a new additional case:
////
////Case 1: FRONT = 0 && REAR == SIZE - 1
////Case 2: FRONT = REAR + 1
////The second case happens when REAR starts from 0 due to circular increment and when its value is just 1 less than FRONT, the queue is full.
//
//
//
//#include<stdio.h>
//#include <stdlib.h>
//void insert();
//void delete();
//void display();
//int q[10],front=0,rear=-1,max=3;
//int main()
//{
//    int ch;
//    printf("\nCircular Queue operations\n");
//    printf("1.insert\n2.delete\n3.display\n4.exit\n");
//    scanf("%d",&ch);
//    while(ch<=4)
//    {
//        printf("Enter your choice:");
//        scanf("%d",&ch);
//        switch(ch)
//        {
//            case 1: insert();
//                break;
//            case 2: delete();
//                break;
//            case 3:display();
//                break;
//            case 4:exit(1);
//            default:printf("Invalid option\n");
//        }
//    }
//}
//void insert()
//{
//    int x;
//    if((front==0&&rear==max-1)||(front>0&&rear==front-1))
//        printf("Queue is overflow\n");
//    else
//    {
//        printf("Enter element to be insert:");
//        scanf("%d",&x);
//        if(rear==max-1&&front>0)
//        {
//            rear=0;
//            q[rear]=x;
//        }
//        else
//        {
//            if((front==0&&rear==-1)||(rear!=front-1))
//                q[++rear]=x;
//        }
//    }
//}
//void  delete()
//{
//    int a;
//    if((front==0)&&(rear==-1))
//    {
//        printf("Queue is underflow\n");
//        exit();
//    }
//    if(front==rear)
//    {
//        a=q[front];
//        rear=-1;
//        front=0;
//    }
//    else
//    if(front==max-1)
//    {
//        a=q[front];
//        front=0;
//    }
//    else a=q[front++];
//    printf("Deleted element is:%d\n",a);
//}
//
//void display()
//{
//    int i,j;
//    if(front==0&&rear==-1)
//    {
//        printf("Queue is underflow\n");
//        exit();
//    }
//    if(front>rear)
//    {
//        for(i=0;i<=rear;i++)
//            printf("\t%d",q[i]);
//        for(j=front;j<=max-1;j++)
//            printf("\t%d",q[j]);
//        printf("\nrear is at %d\n",q[rear]);
//        printf("\nfront is at %d\n",q[front]);
//    }
//    else
//    {
//        for(i=front;i<=rear;i++)
//        {
//            printf("\t%d",q[i]);
//        }
//        printf("\nrear is at %d\n",q[rear]);
//        printf("\nfront is at %d\n",q[front]);
//    }
//    printf("\n");
//}