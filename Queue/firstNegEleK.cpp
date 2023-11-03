#include<bits/stdc++.h>
using namespace std;

//Better Approach.
//Time complexity - O(n);
//Space complexity - O(k);

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
        //removal
        if(!dq.empty() && i-dq.front() >= k){
            dq.pop_front();
        }

        //addition
        if(arr[i] < 0){
            dq.push_back(i);
        }
        
        //ans store
        if(dq.size() > 0){
            ans.push_back(arr[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
    }
    return ans;
}

//Optimial Approach.
//Time complexity - O(n);
//Space complexity - O(k);

vector<long long>NegativeInteger(vector<long long int>&arr, long long int k){

    deque<long long int>dq;
    vector<long long>ans;

    for(int i=0; i<arr.size(); i++){

        if(arr[i] < 0){
            dq.push_back(i);
        }

        if(!dq.empty() && dq.front() == i-k){
            dq.pop_front();
        }

        if(i >= k-1){
            if(!dq.empty()){
                ans.push_back(arr[dq.front()]);
            }
            else{
                ans.push_back(0);
            }
        }
    }
    return ans;
}

int main(){
    vector<long long int>arr = {-8, 2, 3, -6, 10};
    long long int k = 2;


    vector<long long>res = NegativeInteger(arr,k);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;

return 0;
}