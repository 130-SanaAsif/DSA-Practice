#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void printArray(vector<int>&a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void FindLarger(vector<int>&a){
    stack<int>s;
    for(int i=0; i<a.size(); i++){
        while(!s.empty() && s.top() <= a[i]){
            s.pop();
        }
        if(s.empty()){
            cout<<"-1 ";
        }
        else{
            cout<<s.top()<<" ";
        }
        s.push(a[i]);
    }
}

int main(){
    vector<int>a = {10, 4, 2, 20, 40, 12, 30};
    cout<<"Before..."<<endl;
    printArray(a);
    cout<<"After..."<<endl;
    FindLarger(a);
    cout<<endl;
    return 0;
}