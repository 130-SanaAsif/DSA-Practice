#include<bits/stdc++.h>
using namespace std;

int secondSmall(int arr[], int n){
    int small = INT_MAX;
    int s_small = INT_MAX;

    for(int i=0; i<n; i++){
        if(arr[i] < small){
            s_small = small;
            small = arr[i];
        }
        else if(arr[i] < s_small && arr[i] != small){
            s_small = arr[i];
        }
    }
    return s_small;
}

int secondLarge(int arr[], int n){
    int large = INT_MIN;
    int s_large = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > large){
            s_large = large;
            large = arr[i];
        }
        else if(arr[i] > s_large && arr[i] != large){
            s_large = arr[i];
        }
    }
    return s_large;
}
int main(){
    int n;
    int arr[n];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

    int large = secondLarge(arr, n);
    int small = secondSmall(arr, n);

    cout<<"Second Large Number = "<<large<<endl;
    cout<<"Second Small Number = "<<small<<endl;

return 0;
}