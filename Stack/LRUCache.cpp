#include<bits/stdc++.h>
using namespace std;

class LRUCache{
public:
    class Node{
        public:
            int key;
            int val;
            Node* prev;
            Node* next;

            Node(int key, int val){
                this->key = key;
                this->val = val;
            }
    };

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);

    int cap;
    unordered_map< int, Node* >m;

    LRUCache(int capacity){
        cap = capacity;
        head -> next = tail;
        tail -> prev = head;
    }

    void addNode(Node* newNode){
        Node* temp = head -> next;

        newNode -> next = temp;
        newNode -> prev = head;

        head -> next = newNode;
        temp -> prev = newNode;
    }

    void delNode(Node* delnode){
        Node* prevv = delnode -> prev;
        Node* nextt = delnode -> next;

        prevv -> next = nextt;
        nextt -> prev = prevv;
    }

    int get(int key){
        if(m.find(key) != m.end()){
            Node* resNode = m[key];
            int ans = resNode -> val;

            m.erase(key);
            delNode(resNode);
            addNode(resNode);

            m[key] = head -> next;
            return ans;
        }
        return -1;
    }

    void put(int key, int value){
        if(m.find(key) != m.end()){
            Node* curr = m[key];
            m.erase(key);
            delNode(curr);
        }

        if(m.size() == cap){
            m.erase(tail -> prev -> key);
            delNode(tail -> prev);
        }

        addNode(new Node(key, value));
        m[key] = head -> next;

        cout<<"Pushed"<<endl;
    }
};

int main(){
    LRUCache cache(2);
    cache.put(2,1);
    cache.put(1,1);
    //cache.put(2,12);
    int ans = cache.get(2);
    cout<<ans<<endl;
    cache.put(4,1);
    int ans1 = cache.get(1);
    cout<<ans1<<endl;
    //cache.put(4,25);
    int ans2 = cache.get(2);
    cout<<ans2<<endl;

    return 0;
}