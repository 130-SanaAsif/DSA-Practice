#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bruteForce(int arr[], int n){
    vector<bool>visited(n,false);
    for(int i=0; i<n; i++){
        if(visited[i] == true){
            continue;
        }
        int cnt = 1;
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                cnt++;
            }
        }
        cout<<arr[i]<<" = "<<cnt<<endl;
    }
}

//TC - O(n).
//SC - O(n).
void countFrequency(int arr[], int n){
    unordered_map<int, int>mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    for(auto x : mp){
        cout<<x.first<<" = "<<x.second<<endl;
    }
}

int main(){
    int n;
    int arr[n];

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printArray(arr, n);
    //bruteForce(arr, n);
    countFrequency(arr, n);
return 0;
}