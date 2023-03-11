#include<bits/stdc++.h>
using namespace std;

//Optimised Approach.
//Time Complexity - O(n).
//Time Complexity - O(1).
int countSubXOR(vector<int>&arr, int k){
    unordered_map<int, int>freq;
    int XOR  = 0, cnt = 0;
    for(int i=0; i<arr.size();i++){
         XOR^=arr[i];
        if(XOR==k) cnt++;
        int h = XOR^k;
        if(freq.find(h)!=freq.end()){
            cnt=cnt+freq[h];
        }
        freq[XOR]++;
    }
    return cnt;
}

int main(){
    vector<int>arr = {4,2,2,6,4};
    int k = 6;
    int res = countSubXOR(arr,k);
    cout<<res;
    return 0;
}