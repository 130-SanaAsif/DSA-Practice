#include<bits/stdc++.h>
using namespace std;

int sumSmallLarge(int arr[], int n){
    int small = INT_MAX;
    int large = INT_MIN;
    for(int i=0; i<n; i++){
        if(large < arr[i]){
            large = arr[i];
        }
    }

    for(int i=0; i<n; i++){
        if(small > arr[i]){
            small = arr[i];
        }
    }
    int sum = large+small;
    return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Given : "<<endl;
    cout<<n<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int res = sumSmallLarge(arr,n);
    cout<<res;

    return 0;
}