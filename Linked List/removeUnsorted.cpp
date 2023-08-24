#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void insertNode(Node* &head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        return;
    }
    else{
        Node* newNode = new Node(d);
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printNode(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
//Brute Force.
//TC - O(n^2).
//SC - o(1).

Node* removeDuplicate(Node* head){
    if(head == NULL && head->next == NULL){
        return head;
    }

    Node* cur = head;
    while (cur != NULL && cur->next != NULL){
        
        Node* temp = cur;
        while(temp->next != NULL){

            if(cur->data == temp->next->data){
                Node* nextPoint = temp->next->next;
                Node* deleteTo = temp->next;
                delete(deleteTo);
                temp->next = nextPoint;
            }
            else{
                temp = temp->next;
            }
        }
        cur = cur->next;
    }
    return head;
}

//Aproach-2.
//TC - O(nlogn).
//SC - O(1).
// Node* Sort(Node* &head){
//     if(head == NULL && head->next == NULL){
//         return head;
//     }

//     Node* cur = head;
//     Node* prev = NULL;
//     while(cur != NULL && cur->next != NULL){
//         Node* temp = cur->next;
//         if(cur->data > temp->data){
//             swap(temp->data,cur->data);
//         }
//         else{
//             cur = cur->next;
//         }
//     }
//     return head;
// }
// Node* Remove(Node* head){
//     if(head == NULL && head->next == NULL){
//         return head;
//     }
//     return head;
// }


//Approach-3.
//TC - O(n).
//SC - O(n).
Node* Remove(Node* head){
    if(head == NULL && head->next == NULL){
        return head;
    }
    map<int, int>visit;
    Node* curr = head;
    Node* prev = NULL;

    while(curr != NULL){
        visit[curr->data]++;
        if(visit[curr->data] > 1){
            Node* del = curr;
            prev->next = curr->next;
            curr = curr->next;
            delete del;
        }
        else{
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}

int main(){
    Node* head = NULL;
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 8);
    insertNode(head, 1);
    insertNode(head, 6);
    insertNode(head, 8);
    insertNode(head, 2);
    printNode(head);

    Node* ans = Remove(head);
    printNode(ans);

    // Node* res = removeDuplicate(head);
    // printNode(res);

    return 0;
}