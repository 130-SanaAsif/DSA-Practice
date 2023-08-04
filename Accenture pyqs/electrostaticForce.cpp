#include<bits/stdc++.h>
using namespace std;

int ElectroStaticForce(int arr[], char ch[], int n){
    int sum = 0;
    int ef;
    for(int i=0; i<n; i++){
        if(ch[i] == 'P'){
            sum = sum+arr[i];
        }
        else{
            sum = sum-arr[i];
        }
    }
    // sum = abs(sum);
    ef = sum*100;
    return ef;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    char ch[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array 1"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cin>>ch;
    cout<<ch<<endl;
    int res = ElectroStaticForce(arr,ch,n);
    cout<<res;

    return 0;
}