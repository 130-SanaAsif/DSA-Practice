//Pattern 12.
//1                 1 
//1 2             2 1 
//1 2 3         3 2 1 
//1 2 3 4     4 3 2 1 
//1 2 3 4 5 5 4 3 2 1 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        for(int j=1; j<=4*(n-i); j++){
            cout<<" ";
        }
        for(int k=i; k>=1; k--){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
}