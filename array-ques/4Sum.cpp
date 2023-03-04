#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>Sum(vector<int>&arr, int key){
    vector<vector<int>>ans;
    int n = arr.size();
    sort(arr.begin(),arr.end());
    for(int i = 0; i<n; i++){
        int key2 = key - arr[i];
        for(int j=i+1; j<n; j++){
            int key3 = key2 - arr[j];
            int lo = j+1;
            int hi = n-1;
            while(lo < hi){
                int sum = arr[lo] + arr[hi];
                if(sum < key3)
                    lo++;
                else if(sum > key3)
                    hi--;
                
                else{
                    vector<int>res(4,0);
                    res[0] = arr[i];
                    res[1] = arr[j];
                    res[2] = arr[lo];
                    res[3] = arr[hi];
                    ans.push_back(res);
                    while(lo < hi && arr[lo] == res[2]) ++lo;
                    while(lo < hi && arr[hi] == res[3]) --hi;
                }
            }
            while(j+1 < n && arr[j+1] == arr[j]) ++j;
        }
        while(i+1 < n && arr[i+1] == arr[i]) ++i;
    }
    return ans;
}

int main(){
    vector<int>arr = {4,3,3,4,4,2,1,2,1,1};
    int key = 9;
    vector<vector<int>>res;
    res = Sum(arr,key);
    for(int i=0; i<res.size();i++){
        for(int j=0; j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}