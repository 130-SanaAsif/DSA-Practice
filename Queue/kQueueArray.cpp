#include<bits/stdc++.h>
using namespace std;

class kqueue{
public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int *next;
    int freespot;

    kqueue(int n, int k){
        this->n = n;
        this->k = k;

        front = new int[k];
        rear = new int[k];

        for(int i=0; i<k; i++){
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[n];

        for(int i=0; i<n; i++){
            next[i] = i+1;
        }

        next[n-1] = -1;

        arr = new int[n];

        freespot = 0;
    }

    void push(int x, int qn){
        //queue is full.
        if(freespot == -1){
            cout<<"Queue OverFlow.";
            return;
        }

        //find index.
        int index = freespot;
        
        //update freespot.
        freespot = next[index];

        //check for first element.
        if(front[qn-1] == -1){
            front[qn-1] = index;
        }
        else{
            next[rear[qn-1]] = index;
        }

        //update next.
        next[index] = -1;

        //point rear to index;
        rear[qn-1] = index;

        //push element.
        arr[index] = x;
    }

    int pop(int qn){
        //check queue is empty.
        if(front[qn-1] == -1){
            cout<<"Queue Underflow."<<endl;
            return -1;
        }

        //find index to pop.
        int index = front[qn-1];

        //increase front.
        front[qn-1] = next[index];

        //manage freespot.
        next[index] = freespot;
        freespot = index;

        return arr[index];
    }

    // int top(int qn){
    //     if(front[qn-1] == -1){
    //         cout<<"Queue is empty."<<endl;
    //         return -1;
    //     }


    // }
};


int main(){
    kqueue q(10,3);
    q.push(10,1);
    q.push(20,2);
    q.push(23,1);
    q.push(21,1);
    q.push(34,3);

    cout<<q.pop(1)<<endl;
    cout<<q.pop(1)<<endl;
    cout<<q.pop(2)<<endl;

    q.push(45,2);
    
    cout<<q.pop(3)<<endl;

    q.push(54,3);

    cout<<q.pop(3)<<endl;
    cout<<q.pop(1)<<endl;
    cout<<q.pop(2)<<endl;

return 0;
}