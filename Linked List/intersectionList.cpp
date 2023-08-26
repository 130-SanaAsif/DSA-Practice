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
    Node* newNode = new Node(d);
    if(head == NULL){
        head = newNode;
        return;
    }
    else{
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
//TC - O(NxM).
//SC - O(1).

Node* intersection(Node* head1, Node* head2){
    if(head1 == NULL || head2 == NULL){
        return NULL;
    }
    while(head2 != NULL)
    {
        Node* temp = head1;
        while (temp != NULL)
        {
            if(temp == head2){
                return head2;
            }
            temp = temp->next;
        }
        head2 = head2->next;
    }
    return NULL;
}

//Better Approach.
//TC - O(N+M).
//SC - O(1).

Node* hashApproach(Node* head1, Node* head2){
    if(head1 == NULL || head2 == NULL){
        return NULL;
    }
    unordered_set<Node*>st;
    while(head1 != NULL){
        st.insert(head1);
        head1 = head1->next;
    }
    while(head2 != NULL){
        if(st.find(head2) != st.end()){
            return head2;
        }
        head2 = head2 -> next;
    }
    return NULL;
}

//Optimal 1 Approach (Differnce in length).
//TC - O(2max(length of list1,length of list2))+O(abs(length of list1-length of list2))+O(min(length of list1,length of list2))
//SC - O(1).

int getlen(Node* head1, Node* head2){
    int len1 = 0, len2 = 0;
    while(head1 != NULL || head2 != NULL){
        if(head1 != NULL){
            len1++;
            head1 = head1 -> next;
        }
        if(head2 != NULL){
            len2++;
            head2 = head2 -> next;
        }
    }
    return len1 - len2;
}

Node* intersectList(Node* head1, Node* head2){
    if(head1 == NULL || head2 == NULL){
        return NULL;
    }

    int diff = getlen(head1,head2);

    if(diff < 0){
        while(diff++ != 0){
            head2 = head2->next;
        }
    }
    else{
        while(diff-- != 0){
            head1 = head1->next;
        }
    }

    while(head1 != NULL){
        if(head1 == head2) {
            return head1;
        }
        head2 = head2->next;
        head1 = head1->next;
    }
    return head1;
}

//Optimised Approach.
//TC - O(2*max(length of list1,length of list2)).
//SC - O(1).

Node* intersectTwoList(Node* head1, Node* head2){
    if(head1 == NULL || head2 == NULL){
        return NULL;
    }

    Node* dum1 = head1;
    Node* dum2 = head2;

    while(dum1 != dum2){
        dum1 = dum1 == NULL? head2 : dum1->next;
        dum2 = dum2 == NULL? head1 : dum2->next;
    }
    return dum1;
}

int main(){
    Node* head = NULL;
    // Node* head2 = NULL;

    insertNode(head,4);
    insertNode(head,1);
    insertNode(head,8);
    insertNode(head,4);
    insertNode(head,5);
    printNode(head);

    // insertNode(head2,5);
    // insertNode(head2,6);
    // insertNode(head2,1);
    // insertNode(head2,8);
    // insertNode(head2,4);
    // insertNode(head2,5);
    // printNode(head2);

    Node* head1 = head;
    head = head->next->next->next;
    Node* headsec = NULL;
    insertNode(headsec,2);
    insertNode(headsec,5);
    insertNode(headsec,6);
    insertNode(headsec,1);
    Node* head2 = headsec;
    headsec->next->next->next->next = head;
    printNode(head2);
    
    // Node* res = intersection(head1,head2);
    // Node* ans = hashApproach(head1,head2);
    // Node* opt = intersectList(head1,head2);
    Node* optimal = intersectTwoList(head1,head2);
    if(optimal == NULL){
        cout<<"No intersection"<<endl;
    }
    else{
        cout<<"Intersection present at "<<optimal->data<<endl;
    }
    return 0;
}