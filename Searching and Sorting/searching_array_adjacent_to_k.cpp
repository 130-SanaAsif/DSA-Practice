#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

int search_array_adjacent_to_k(vector<int>&arr, int x, int k){
    int i=0;
    while(i< arr.size()){
        if(arr[i] == x){
            return i;
        }
        i = i+max(1, abs(arr[i]-x)/k);
    }
    return -1;
}

int main(){
    vector<int>arr = {4, 5, 6, 7,6,8,10,11};
    int k = 2;
    int x = 11;
    int res = search_array_adjacent_to_k(arr,x,k);
    cout<<"The elemnent "<<x<<" is present at index no. "<<res<<endl;
    return 0;
}