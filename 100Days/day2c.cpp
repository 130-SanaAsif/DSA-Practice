#include<bits/stdc++.h>
using namespace std;
bool direction(int n, vector<char>&arr){
    int ori = 0;
    for(int i=0; i<n; i++){
       
        if('U' == arr[i]){
            ori += 1;
        }
        if('D' == arr[i]){
            ori -= 1;
        }
        if('L' == arr[i]){
            ori += 1;
        }
        if('R' == arr[i]){
            ori -= 1;
        }
    }

    if(ori == 0){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    vector<char>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;

    if(direction(n,arr)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
return 0;
}