#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>&st, int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }

    int num = st.top();
    st.pop();

    solve(st, ele);

    st.push(num);
}

stack<int> pushAtBottom(stack<int>&st, int ele){
    solve(st,ele);
    return st;
}

int main(){
    stack<int>st;
    vector<int>arr = {7,1,4,5};
    for(int i=0; i<arr.size(); i++){
        st.push(arr[i]);
    }

    stack<int>ans = pushAtBottom(st,9);

    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }

    return 0;
}