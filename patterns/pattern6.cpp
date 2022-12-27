//Pattern 6.
//1 2 3 4 5 
//1 2 3 4 
//1 2 3 
//1 2 
//1 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        int p=1;
        for(int j=i; j<=n; j++){
            cout<<p++<<" ";
        }
        cout<<endl;
    }
    return 0;
}