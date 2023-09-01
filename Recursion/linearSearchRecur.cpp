#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    cout<<"Size of array "<<n<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool linear(int arr[], int n, int k){
    printArray(arr,n);
    if(n == 0){
        return false;
    }
    if(arr[0] == k){
        return true;
    }
    else{
        bool ans = linear(arr+1,n-1,k);
        return ans;
    }
}

int main(){
    int arr[] = {9,8,7,5,4,2,1};
    int n = 7;
    int k = 6;
    bool ans = linear(arr,n,k);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"Not present"<<endl;
    }
}