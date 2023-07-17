#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }
    node*temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node*head){
    node*ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<"->";
        ptr = ptr->next;
    }
    cout<<"NULL"<<endl;
}

//approach 1.
//TC - O(n).
//SC - O(1).
 node* reverseList(node* head){

    if(head == NULL || head->next == NULL){
        return head;
    }
   
    node*prev = NULL;
    node*cur = head;
    node* forward = NULL;
    while(cur != NULL){
        forward = cur->next;
        cur->next = prev;
        prev = cur;
        cur = forward;
    }
    head = prev; 
    return head;
}

//Approach 2 using recursion.
//TC - O(n).
//SC - O(n).
void recursive(node* &head, node* cur, node* prev){
    if(cur == NULL){
        head = prev;
        return;
    }
    node* forward = cur->next;
    recursive(head,forward,cur);
    cur->next = prev;
}
node* recursiveReverse(node* head){
    node* cur = head;
    node* prev = NULL;
    recursive(head,cur,prev);
    return head;
}

//Approach 3.
//TC - O(n).
//SC - O(n).
node* recursionII(node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    node* reverseNode = recursionII(head->next);
    head->next->next =  head;
    head->next = NULL;
    return reverseNode;
}
node* recursiveReverseII(node* head){
    return recursionII(head);
}

int main(){
    node*head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    display(head);
    // node* result = reverseList(head);
    // node* res = recursiveReverse(head);
    node* ans = recursiveReverseII(head);
    display(ans);
    return 0;
}