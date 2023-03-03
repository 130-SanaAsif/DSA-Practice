#include<iostream>
#include<vector>
using namespace std;

//Brute Forece Approach.
//Time Complexity - O(N)
//Space Complexity - O(1)
int Search(vector<int>&arr, int key){
    int res = -1;
    for(int i=arr.size()-1; i>=0; i--){
        if(arr[i] == key){
            res = i;
            break;
        }
    }
    return res;
}

//Optimal Approach.
//Time Complexity - O(log N).
//Space Complexity - O(1).
int search(vector<int>&arr, int key){
    int n = arr.size();
    int lo = 0;
    int hi = n-1, res = -1;
    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(arr[mid] == key){
            res = mid;
            lo = mid+1; 
        }
        else if(key < arr[mid]){
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    return res;
}

int main(){
    vector<int>arr = {3,4,13,13,13,20,40};
    int key = 13;
    cout<<"Brute-Force Approach:"<<endl;
    cout << Search(arr,key) << "\n";
    cout<<"Optimal Approach:"<<endl;
    cout<<search(arr,key)<<endl;
    return 0;
}