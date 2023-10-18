#include<bits/stdc++.h>
using namespace std;

class NStack{
    int *arr;
    int *top;
    int *next;

    int n,s;

    int freespot;

public:
    NStack(int N, int S){
        n = N;
        s = S;

        arr = new int[s];
        top = new int[n];
        next = new int[s];

        for(int i=0; i<n; i++){
            top[i] = -1;
        }

        for(int i=0; i<s; i++){
            next[i] = i+1;
        }

        next[s-1] = -1;

        freespot = 0;
    }

    bool push(int x, int m){
        if(freespot == -1){
            return false;
        }
        else{
            int index = freespot;
            freespot = next[index];
            arr[index] = x;
            next[index] = top[m-1];
            top[m-1] = index;
            cout<<"True"<<endl;
            return true;
        }
    }

    int pop(int m){
        if(top[m-1] == -1){
            return -1;
        }
        int index = top[m-1];
        top[m-1] = next[index];
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
};

int main(){
    NStack s1(3,6);
    s1.push(10,1);
    s1.push(20,1);
    s1.push(30,1);
    int x = s1.pop(1);
    cout<<x<<endl;
    int x1 = s1.pop(1);
    cout<<x1<<endl;
    int x2 = s1.pop(1);
    cout<<x2<<endl;

    return 0;
}