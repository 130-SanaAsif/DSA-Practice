#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

//Brute Force
//TC - O(N*N)
//SC - O(N)
void countFrequency(int arr[], int n){
    vector<bool> visited(n,false);

    for(int i=0; i<n; i++){
        if(visited[i] == true){
            continue;
        }

        int count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[j] == arr[i]){
                visited[j] = true;
                count++;
            }
        }
          cout<<arr[i]<<" "<<count<<endl;
    }
}
//Optimised Approach
//TC - O(N)
//SC - O(N)
void frequency(int arr[], int n){
    unordered_map<int, int>map;
    for(int i=0; i<n; i++){
        map[arr[i]]++;
    }
    for(auto x : map){
        cout<<x.first<<" "<<x.second<<endl;
    }
}
int main(){
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Brute-Force - "<<endl;
    countFrequency(arr,n);
    cout<<"Optimised Approach - "<<endl;
    frequency(arr,n);
    return 0;
}