#include<iostream>
#include<unordered_map>
using namespace std;

void countDistinct(int arr[], int n, int k){
    unordered_map<int,int> mp;
    int count = 0;
    for(int i=0; i<k; i++){
        if(mp[arr[i]] == 0){
            count++;
        }
        mp[arr[i]] +=1;
    }

    cout<<count<<endl;
    for(int i=k; i<n; i++){
        if(mp[arr[i-k]] == 1){
            count--;
        }

        mp[arr[i-k]] -=1;

        if(mp[arr[i]] == 0){
            count++;
        }
        mp[arr[i]] +=1;
        cout<<count<<endl;
    }
}
int main(){
    int arr[] = {1,2,1,3,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =4;
    countDistinct(arr,n,k);
    return 0;
}