#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach.
//Time Complexity - O(N*N).
//Space Complexity - O(1).

void getMax(vector<int>&arr, int l, int r, vector<int>&res){
    int maxi = INT_MIN;
    for(int i=l; i <= r; i++){
        maxi = max(maxi, arr[i]);
    }
    res.push_back(maxi);
}

vector<int>maxSliding(vector<int>&arr, int k){
    int l = 0, r = 0;
    vector<int>res;

    while(r < k-1){
        r++;
    }

    while (r < arr.size())
    {
        getMax(arr,l,r,res);
        l++;
        r++;
    }
    return res;
}

//Optimised Approach using deque.
//Time Complexity - O(n).
//Space Complexity - O(n).

vector<int>maxSlidingWindow(vector<int>&arr, int k){
    vector<int>res;
    deque<int>dq;

    for(int i=0; i<arr.size(); i++){
        if(!dq.empty() && dq.front() == i-k){
            dq.pop_front();
        }

        while(!dq.empty() && arr[dq.back()] < arr[i]){
            dq.pop_back();
        }

        dq.push_back(i);

        if(i >= k-1){
            res.push_back(arr[dq.front()]);
        }
    }
    return res;
}

int main(){
    vector<int>arr = {4,0,-1,3,5,3,6,8};
    int k = 3;

    cout<<"Optimised"<<endl;
    vector<int>res = maxSlidingWindow(arr,k);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    cout<<"Brute Force "<<endl;
    vector<int>ans = maxSliding(arr,k);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}