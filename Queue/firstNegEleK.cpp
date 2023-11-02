#include<bits/stdc++.h>
using namespace std;

vector<long long>firstNegativeInteger(vector<long long int>&arr, long long int k){
    int n = arr.size();
    deque<long long int>dq;
    vector<long long>ans;

    for(int i=0; i<k; i++){
        if(arr[i] < 0){
            dq.push_back(i);
        }
    }

    if(dq.size() > 0){
        ans.push_back(arr[dq.front()]);
    }
    else{
        ans.push_back(0);
    }

    for(int i=k; i<n; i++){
        if(!dq.empty() && i-dq.front() >= k){
            dq.pop_front();
        }

        if(arr[i] < 0){
            dq.push_back(i);
        }

        if(dq.size() > 0){
            ans.push_back(arr[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
    }
    return ans;
}


int main(){
    vector<long long int>arr = {-8, 2, 3, -6, 10};
    long long int k = 2;


    vector<long long>res = firstNegativeInteger(arr,k);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;

return 0;
}