#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cout<<"Value of r -> ";
    cin>>r;
    cout<<"Value of c -> ";
    cin>>c;
    int arr[r][c];
    cout<<"Enter elements in array = ";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }

    int maxCount = 0; 
    int ans = 0;

    for(int i=0; i<r; i++){
        int cnt = 0;
        for(int j=0; j<c; j++){
            if(arr[i][j] == 1){
                cnt++;
            }
        }
        if(maxCount < cnt){
            maxCount = cnt;
            ans = i+1;
        }
       
    }
    cout<<"Row "<<ans<<" has maximum no's of 1."<<endl;
return 0;
}