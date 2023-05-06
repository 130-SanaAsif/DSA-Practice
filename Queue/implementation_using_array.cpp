#include<iostream>
using namespace std;
#define n 1000

class queue{
    int *arr;
    int front;
    int back;
    public:
        queue(){
            front = -1;
            back = -1;
            arr = new int[n]; 
        }
        void push(int x){
            if(back == n-1){
                cout<<"Queue OverFlow"<<endl;
                return;
            }
            back++;
            arr[back] = x;
            
            if(front == -1){
                front++;
            }
        }

        void pop(){
            if(front == -1 || front > back){
                cout<<"No elements in queue"<<endl;
                return;
            }
            front++;
        }

        int peek(){
            if(front == -1 || front > back){
                cout<<"No elements in queue"<<endl;
                return -1;
            }
            return arr[front];
        }

        bool empty(){
            if(front == -1 || front > back){
                return true;
            }
            return false;
        }
};

int main(){
    queue q;
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    cout<<"Element present in queue: "<<endl;
    while(!q.empty()){
        cout<<q.peek()<<" ";
        q.pop();
    }
    cout<<endl;
    if(q.empty()){
        cout<<"True";
    }
    else{
        cout<<"Flase";
    }
    return 0;
}
//Time Complexity - O(n).
//Space Complexity - O(1).