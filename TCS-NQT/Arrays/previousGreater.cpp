#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int maxi = INT_MIN;
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
            cnt++;
        }
    }

    cout<<"The count is = "<<cnt<<endl;
return 0;
}