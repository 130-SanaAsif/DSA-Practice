#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
        vector<long long>NextSmaller(vector<long long>&arr){
            int n = arr.size();
            vector<long long>brr(n);
            stack<long long>s;

            for(int i=n-1; i>=0; i--){
                while(!s.empty() && s.top() <= arr[i]){
                    s.pop();
                }
                brr[i] = (s.empty() ?-1: s.top());
                s.push(arr[i]);
            }
            return brr;
        }

        void printArray(vector<long long>&arr){
            for(long long i=0; i<arr.size(); i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    vector<long long>arr = {6,8,0,1,3};
    solution obj;
    obj.printArray(arr);
    vector<long long>res = obj.NextSmaller(arr);
    for(long long i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}