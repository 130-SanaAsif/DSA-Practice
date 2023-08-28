#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertNode(Node* &head, int d){
    Node* newNode = new Node(d);
    if(head == NULL){
        head = newNode;
    }
    else{
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
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

//Brute Force Approach.
//TC - O(n^2).
//SC - O(1).
vector<pair<int,int>> pairList(Node* head, int k){
    
    vector<pair<int,int>> ans;

    Node* curr = head;

    while(curr != NULL){
        Node* temp = curr->next;
        while(temp != NULL){
            if((curr->data+temp->data) == k){
                ans.push_back({curr->data, temp->data});
            }
            temp = temp->next;
        }
        curr = curr->next;
    }
    return ans;
}

//Better Approach using hashing.
//TC - O(n).
//SC - O(n).
vector<pair<int,int>> pairListSum(Node* head, int k){
    unordered_set<int>hash;
    vector<pair<int,int>> ans;

    Node* curr = head;
    while(curr != NULL){
        int val = curr->data;
        if(hash.find(k-val) != hash.end()){
            ans.push_back(make_pair(val,k-val));
        }
        else{
            hash.insert(val);
        }
        curr = curr->next;
    }
    return ans;
}

//Optimal Approach.
//TC - O(n).
//SC - O(1).
vector<pair<int,int>> pairSum(Node* head, int k){
    vector<pair<int,int>> ans;

    Node* start = head;
    Node* end = head;

    while(end->next != NULL){
        end = end->next;
    }

    while(start->data < end->data){
        int sum = start->data + end->data;
        if(sum == k){
            ans.push_back(make_pair(start->data,end->data));
            start = start->next;
            end = end->prev;
        }
        else if(sum < k){
            start = start->next;
        }
        else{
            end = end->prev;
        }
    }
    return ans;
}

int main(){
    Node* head = NULL;

    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,9);
    printNode(head);

    // vector<pair<int,int>> ans = pairList(head,5); //->Brute force approach.
    //vector<pair<int,int>> ans = pairListSum(head,5) //->Better approach.
    vector<pair<int,int>> ans = pairSum(head,5); //->Optimal approach.

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i].first<<","<<ans[i].second<<endl;
    }

    return 0;
}