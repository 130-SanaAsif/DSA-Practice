#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};

void PrintLinkList(struct Node*ptr){
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
struct Node*ReverseLinkList(struct Node** head){
    struct Node*cur = *head;
    struct Node*prev = NULL;
    struct Node*temp = NULL;
    while(cur != NULL){
       temp = cur->next;
       cur->next = prev;
       prev= cur;
       cur = temp;
    }
   *head = prev;
}
int main(){

    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;
    struct Node*fifth;
    struct Node*sixth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    fifth = (struct Node*)malloc(sizeof(struct Node));
    sixth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 34;
    head->next = second;

    second->data = 41;
    second->next = third;

    third->data = 23;
    third->next = fourth;

    fourth->data = 55;
    fourth->next = fifth;

    fifth->data = 45;
    fifth->next = sixth;

    sixth->data = 56;
    sixth->next = NULL;
    
    PrintLinkList(head);
    printf("\n");
    printf("After\n");
    ReverseLinkList(&head);
    PrintLinkList(head);
return 0;
}