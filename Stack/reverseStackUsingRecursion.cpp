#include<bits/stdc++.h>
using namespace std;

//Approach 1.
//Using Recursion.
//Time Complexity - O(N^2);
//Space Complexity - O(2N);

void insertBottom(stack<int>&st, int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }

    int num = st.top();
    st.pop();

    insertBottom(st, ele);

    st.push(num);
}

void reverseStack(stack<int>&st){
    if(st.empty()){
        return;
    }

    int num = st.top();
    st.pop();

    reverseStack(st);

    insertBottom(st,num);
}

// Approach 2
// Using Queue Data Structure.
//Time Complexity - O(N^2).
//Space Complecity - O(2N).

void ReverseStack(stack<int>&st){
    queue<int>q;

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main(){
    stack<int>st;

    vector<int>arr = {3,2};

    for(int i=0; i<arr.size(); i++){
        st.push(arr[i]);
    }
    ReverseStack(st);
    // reverseStack(st);
    //  while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    return 0;
}