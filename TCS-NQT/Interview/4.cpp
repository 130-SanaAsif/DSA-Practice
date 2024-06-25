#include<iostream>
#include<algorithm>
using namespace std;

int oddEvenPos(int arr[], int n){

    if(n == 1){
        return arr[n];
    }

    int even = 0, odd = 0;

    for(int i=0; i<n; i++){
        if(i%2 == 0){
            even+=arr[i];
        }
        else{
            odd += arr[i];
        }
    }

    int diff = abs(even-odd);
    return diff;
}

int main(){
    int n;
    cout<<"Enter the size of an array = ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of an array = ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int res = oddEvenPos(arr,n);
    cout<<"The difference between odd and even pos is "<<res<<endl;

    return 0;
}