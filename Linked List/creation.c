#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};

int main(){
   
    struct Node* head;
    struct Node* first;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    //Linking head node to first node
    head->data = 7;
    head->next = first;

    //Linking head node to first node
    first->data = 9;
    first->next = second;

    //Linking head node to first node
    second->data = 45;
    second->next = third;

    //Linking head node to first node
    third->data = 7;
    third->next = first;

    //Linking head node to first node
    fourth->data = 7;
    fourth->next = first;

return 0;
}