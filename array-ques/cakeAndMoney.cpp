#include<bits/stdc++.h>
using namespace std;

int buyCake(vector<int>&arr, int n){
    unordered_map<int, int>mp;

    for (int cost : arr) {
        if (mp.find(cost) != mp.end()) {
            mp[cost]++;
        } else {
            mp[cost] = 1;
        }
    }

    int cost = INT_MAX;
    for(const auto&it : mp){
        if(it.second == 1 && it.first < cost){
            cost = it.first;
        }
    }
    return cost;
}

int main(){
    int n;
        vector<int>arr(n);

        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int res = buyCake(arr,n);
        cout<<res<<endl;
    
return 0;
}