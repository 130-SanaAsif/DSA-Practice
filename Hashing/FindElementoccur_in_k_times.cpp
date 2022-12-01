//Time complexity O(n).
//Space complexity O(n).
#include<iostream>
#include<unordered_map>
using namespace std;

//Naive Approach
//Time complexity O(n^2).
//Space complexity O(1).
//int FirstOccurElement(int arr[], int n, int k){
//  for(int i=0; i<n; i++){
//      int count = 0;
//      for(int j=0; j<n; j++){
//          if(arr[i] == arr[j]){
//              count++;
//          }
//      }
//      if(count == k)
//          return arr[i];
//    }    
//  return -1;
//  }

//}
int FirstOccurElement(int arr[], int n, int k){
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
        if(mp[arr[i]] == k){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,4,5,6,2,4,8,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3; 
    int res = FirstOccurElement(arr, n, k);
    cout<<res;
    return 0;
}