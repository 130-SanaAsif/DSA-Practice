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

void FindSmaller(vector<int>&a){
    stack<int>s;
    for(int i=0; i<a.size(); i++){
        while(!s.empty() && s.top() >= a[i]){
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
    vector<int>a = {1,3,0,2,5};
   
    FindSmaller(a);
    cout<<endl;
    printArray(a);
    return 0;
}