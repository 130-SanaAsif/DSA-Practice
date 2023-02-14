#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int>NextGreater(vector<int>&arr){
        int n = arr.size();
        vector<int>brr(n);
        stack<int>s;

        for(int i=2*n-1; i>=0; --i){
            while(!s.empty() && s.top() <= arr[i%n]){
                s.pop();
            }

            brr[i%n] = (s.empty() ? -1: s.top());
            s.push(arr[i%n]);
        }
        return brr;
    }

    void printArray(vector<int>&arr){
        int n = arr.size();
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    solution s;
    vector<int>arr = {1,2,3,4,3};
    s.printArray(arr);
    vector<int>res = s.NextGreater(arr);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}