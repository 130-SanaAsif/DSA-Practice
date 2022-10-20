#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};

void TraversalLinkList(struct Node* ptr){
    while(ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main(){

   struct Node* head;
   struct Node* second;
   struct Node* third;
   struct Node* fourth;
   struct Node* fifth; 

   head  = (struct Node*)malloc(sizeof(struct Node));
   second  = (struct Node*)malloc(sizeof(struct Node));
   third  = (struct Node*)malloc(sizeof(struct Node));
   fourth  = (struct Node*)malloc(sizeof(struct Node));
   fifth  = (struct Node*)malloc(sizeof(struct Node));

   //Linking head node to second node.
   head->data = 8;
   head->next = second;

   //Linking second node to third node.
   second->data = 23;
   second->next = third;

   //Linking third node to fourth node.
   third->data = 56;
   third->next = fourth;

   //Linking fourth node to fifth node.
   fourth->data = 67;
   fourth->next = fifth;

   //Terminating the fifth node.
   fifth->data = 90;
   fifth->next = NULL;

   TraversalLinkList(head);
return 0;
}