#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int d){
            this->data = d;
            this->next = NULL;
        }
};

void insertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void insertInMiddle(node* &head, node* &tail, int pos, int d){
    if(pos == 1){
        insertAtHead(head,d);
        return;
    }

    node* temp = head;
    int cnt = 1;
    while(cnt < pos-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }

    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void deleteNode(node* &head, node* &tail, int pos){
    if(pos == 1){
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    else
    {
        node* cur = head;
        node* prev = NULL;
        int cnt = 1;
        while(cnt < pos){
            prev = cur;
            cur = cur->next;
            cnt++;
        }

        prev->next = cur->next;
        cur->next = NULL;
        delete cur;

        int d = prev->data;
        if(prev->next == NULL){
            insertAtTail(tail,d);
            return;
        }
    }
}

void printList(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int len(node* &head){
    int cnt = 0;
    node* temp = head;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }

    return cnt;
}

int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;

    printList(head);
    
    insertAtHead(head,20);
    printList(head);

    insertAtTail(tail,30);
    printList(head);

    insertInMiddle(head,tail,2,40);
    printList(head);

    deleteNode(head,tail,2);
    printList(head);

    cout<<"Length of linked list = "<<len(head)<<endl;
    return 0;
}