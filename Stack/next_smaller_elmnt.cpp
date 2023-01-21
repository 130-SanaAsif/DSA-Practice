#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    void printArray(vector<long long>&arr){
        for(long long i=0; i<arr.size(); i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    vector<long long>NextSmallerElement(vector<long long>&arr){
        int n = arr.size();
        vector<long long>brr(n);
        stack<long long>s;
        for(int i=n-1; i>=0; i--){
            while(!s.empty() && s.top() >= arr[i]){
                s.pop();
            }
            brr[i] = (s.empty() ?-1: s.top());
            s.push(arr[i]);
        }
        return brr;
    }
};

int main(){
    vector<long long>arr = {8,3,5,4,2,1};
    solution obj;
    obj.printArray(arr);
    vector<long long>res = obj.NextSmallerElement(arr);
    for(long long i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}