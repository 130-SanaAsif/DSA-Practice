#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// For traversing the Linked List.
void PrintLinkList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
// Function for inserting the data at the beginning.
struct Node *InsertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
// Function for inserting the data in between the linked list.
// It will not work for index 0, because it ih the way to insert the data in between the linked list
struct Node *InsertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
// Function for iserting the data at the end.
struct Node *InsertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

//Function to insert a node after a node.
struct Node*InsertAfterNode(struct Node*head, struct Node*prevnode, int data){
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevnode->next;
    prevnode->next =ptr;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 8;
    head->next = second;

    second->data = 13;
    second->next = third;

    third->data = 23;
    third->next = fourth;

    fourth->data = 32;
    fourth->next = fifth;

    fifth->data = 45;
    fifth->next = sixth;

    sixth->data = 56;
    sixth->next = NULL;

    printf("Before Inserting:\n");
    PrintLinkList(head);

    printf("After Inserting:\n");
    head = InsertAfterNode(head, third, 90);

    PrintLinkList(head);
    return 0;
}