//Time complexity = O(n*log(n))
//Space complexity = O(1).
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int maximize_toy(vector<int>&arr, int k){
    sort(arr.begin(), arr.end());
    int count = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] <= k){
            count++;
            k-=arr[i];
        }
        else{
            break;
        }
    }
    return count;
}

int main(){
    vector<int>arr = {1, 12, 5, 111, 200, 1000, 10};
    int k = 100;
    int res = maximize_toy(arr, k);
    cout<<res;
    return 0;
}