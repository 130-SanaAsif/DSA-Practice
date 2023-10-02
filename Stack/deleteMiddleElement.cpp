#include<bits/stdc++.h>
using namespace std;


//using recursion.
void solve(stack<int>&inputstack, int cnt, int n){
    if(cnt == n/2){
        inputstack.pop();
        return;
    }

    int num = inputstack.top();
    inputstack.pop();

    solve(inputstack, cnt+1, n);

    inputstack.push(num);
}

void deleteMiddle(stack<int>&inputStack, int n){
    int cnt = 0;
    solve(inputStack,cnt,n);
}

int main(){
    stack<int>st;
    vector<int>arr = {5,6,7,8};
    for(int i=0; i<arr.size(); i++){
        st.push(arr[i]);
    }

    deleteMiddle(st,4);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

   

    return 0;
}