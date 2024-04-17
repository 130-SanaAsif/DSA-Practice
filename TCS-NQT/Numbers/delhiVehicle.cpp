#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d, f;
    cout<<"Number of inputs -> ";
    cin>>n;
    cout<<"Enter date -> ";
    cin>>d;
    cout<<"Enter the amount for fine -> ";
    cin>>f;
    cout<<"Enter number of vehicle -> ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int cntOdd = 0;
    int cntEven = 0;
    for(int i=0; i<n; i++){
            if(arr[i]%2 != 0){
                cntOdd++;
            }
            else{
                cntEven++;
            }
        }
    if(d % 2 == 0){
        int res = cntOdd * f;
        cout<<res<<" -> total fine collected from odd vehicle."<<endl;
        return 0;
    }
    else{
        int ans = cntEven * f;
        cout<<ans<<" -> total fine collected from even vehicle."<<endl;
    }

    
return 0;
}