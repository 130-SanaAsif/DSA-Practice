#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    public:
        int *arr;
        int size;
        int front;
        int rear;

        CircularQueue(int n){
            size = n;
            arr = new int[n];
            front = rear = -1;
        }

        bool push(int data){
            //check queue is full.
            if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
                return false;
            }
            //for single element.
            else if(front == -1){
                front = 0; 
                rear = 0;
            }
            //check rear is in end or not.
            else if(rear == size-1 && front != 0){
                rear = 0;
            }
            else{
                rear++;
            }
            //push value to the queue.
            arr[rear] = data;
            return true;
        }

        int pop(){
            //check queue is empty.
            if(front == -1){
                return -1;
            }

            int ans = arr[front];
            arr[front] = -1;
            //check single element in queue.
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
};
int main(){

CircularQueue cq(4);
cq.push(5);
cq.push(6);
cout<<cq.pop()<<endl;
cq.push(7);
cq.push(10);
cq.push(11);
cout<<cq.pop()<<endl;
cout<<cq.pop()<<endl;

return 0;
}