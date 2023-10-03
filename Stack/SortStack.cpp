#include<bits/stdc++.h>
using namespace std;

void sortInsert(stack<int>&st, int x){
    if(st.empty() || st.top() < x){
        st.push(x);
        return;
    }

    int num = st.top();
    st.pop();

    sortInsert(st,x);

    st.push(num);
}

void sortStack(stack<int>&st){
    if(st.empty()){
        return;
    }

    int num = st.top();
    st.pop();

    sortStack(st);

    sortInsert(st, num);
}

int main(){
    stack<int>st;

    vector<int>arr = {5,-2,9,-7,3};

    for(int i=0; i<arr.size(); i++){
        st.push(arr[i]);
    }
    
    sortStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}