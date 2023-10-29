#include<bits/stdc++.h>
using namespace std;

class Dequeue{
private:
    int *arr;
    int size;
    int front;
    int rear;

public:
    Dequeue(int n){
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    bool push_front(int x){
        if(isFull()){
            return false;
        }

        else if(isEmpty()){
            front = rear = 0;
        }
        else if(front == 0 && rear != size-1){
            front = size-1;
        }
        else{
            front--;
        }
        arr[front] = x;
        return true;
    }

    bool push_back(int x){
        if(isFull()){
            return false;
        }

        else if(isEmpty()){
            front = rear = 0;
        }

        else if(rear == size-1 && front != 0){
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = x;
        return true;
    }

    int pop_front(){
        if(isEmpty()){
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if(front == rear){
            front = rear = -1;
        }
        else if(front == size-1){
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }

    int pop_back(){
        if(isEmpty()){
            return -1;
        }

        int ans = arr[rear];
        arr[rear] = -1;

        if(front == rear){
            front = rear = -1;
        }
        else if(rear == 0){
            rear = size-1;
        }
        else{
            rear--;
        }
        return ans;
    }

    int getFront(){
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    int getRear(){
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[rear];
        }
    }

    bool isEmpty(){
        if(front == -1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if( (front == 0 && rear == size-1) && (front != 0 && rear == (front-1)%(size-1)) ) {
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    Dequeue dq(3);
    dq.push_front(12);
    dq.push_back(14);

    cout<<dq.getFront()<<endl;
    cout<<dq.getRear()<<endl;

    cout<<dq.pop_front()<<endl;
    cout<<dq.getFront()<<endl;
return 0;
}