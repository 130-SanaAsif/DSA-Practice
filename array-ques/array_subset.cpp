#include<iostream>
#include<unordered_map>
using namespace std;

string isSubset(int arr1[], int arr2[], int n, int m){
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++){
        mp[arr1[i]]++;
    }

    for(int i=0; i<m; i++){
        if(mp[arr2[i]] == 0){
            return "No";
        }
        mp[arr2[i]]--;
    }
    return "Yes";
}

int main(){
    int arr1[] = {11, 1, 13, 21, 3, 7};
    int arr2[] = {11, 3, 7, 1, 9};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    string res = isSubset(arr1, arr2,n,m);
    cout<<res;
    return 0;
}