#include<bits/stdc++.h>
using namespace std;

//Using Linear Search.
//Time Complexity - O(n).
//Space Complexity - O(1).
int CountDuplicate(vector<int>&arr, int key){
    int cnt = 0;
    for(int i =0; i<arr.size();i++){
        if(arr[i] == key){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    vector<int>arr = {2,2,3,3,3,3,4};
    int res = CountDuplicate(arr,3);
    cout<<res;
    
}