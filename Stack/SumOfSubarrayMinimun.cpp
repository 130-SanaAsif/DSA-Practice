#include<bits/stdc++.h>
using namespace std;

int sumSubarrayMins(vector<int>&arr){
    int n = arr.size(), mod = 1e9+7;
    stack<pair<int,int>>s1,s2;
    vector<int>left(n);
    vector<int>right(n);

    for(int i = 0; i<n; i++){
        int cnt = 1;
        while(!s1.empty() && arr[i] <= s1.top().first){
            cnt += s1.top().second;
            s1.pop();
        }
        left[i] = cnt;
        s1.push({arr[i],cnt});
    }

    for(int i = n-1; i>=0; i--){
        int cnt = 1;
        while(!s2.empty() && arr[i] < s2.top().first){
            cnt += s2.top().second;
            s2.pop();
        }
        right[i] = cnt;
        s2.push({arr[i],cnt});
    }

    long long int res = 0;
    for(int i=0; i<n; i++){
        res = (res+(long)arr[i]*left[i]*right[i]);
        res %= mod;
    }
    return res%mod;
}

int main(){
    vector<int>arr = {5,1,4,1};
    long long int res = sumSubarrayMins(arr);
    cout<<"Sum of minimum subarray = "<<res;
    return 0;
}