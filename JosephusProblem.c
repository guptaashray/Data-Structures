//#include <stdio.h>
//#include <stdlib.h>
//struct Node{
//    int heads;
//    int pos;
//    struct Node*  next;
//};
//
//void push(struct Node**head_ref, int head, int pos)
//{
//    struct Node *ptr1=(struct Node*)malloc(sizeof(struct Node));
//    ptr1->heads=head;
//    ptr1->pos=pos;
//    ptr1->next=*head_ref;
//    if(*head_ref!=NULL) {
//        struct Node* temp = *head_ref;
//        while (temp->next != *head_ref)
//            temp = temp->next;
//        temp->next = ptr1;
//    }
//    else {
//        ptr1->next = ptr1;
//    }
//    *head_ref=ptr1;
//}
//void printList(struct Node*head)
//{
//    struct Node *temp = head;
//    if (head != NULL)
//    {
//        do
//        {
//            printf("%d\t", temp->pos);
//            temp = temp->next;
//        }
//        while (temp != head);
//    }
//    printf("\n");
//}
//void deleteNode(struct Node* head, int pos)
//{
//    if (head == NULL)
//        return;
//
//    struct Node *curr = head, *prev;
//    while (curr->pos != pos) {
//        if (curr->next == head) {
//            printf("\n Given node is not found in the list!!!");
//            break;
//        }
//        prev = curr;
//        curr = curr->next;
//    }
//
//    if (curr->next == head) {
//        head = NULL;
//        free(curr);
//        return;
//    }
//
//    if (curr == head) {
//        prev = head;
//        while (prev->next != head)
//            prev = prev->next;
//        head = curr->next;
//        prev->next = head;
//        free(curr);
//    }
//
//    else if (curr->next == head) {
//        prev->next = head;
//        free(curr);
//    }
//    else {
//        prev->next = curr->next;
//        free(curr);
//    }
//}
//int main() {
//    struct Node *head = NULL;
//    int n, t, heads;
//    scanf("%d", &n);
//    scanf("%d", &t);
//    scanf("%d", &heads);
//    for(int i=n;i>0;i--)
//    {
//        push(&head, heads,i);
//    }
//
//    for(int i=1;i<n*heads-1;i++) {
//        int pos = 0;
//        for (int j = 1; j <=t; ++j) {
//            head = head->next;
//            pos++;
//        }
//        head->heads -= 1;
//        if (head->heads == 0)
//            deleteNode(head, pos);
//    }
//    printList(head);
//    }
//
