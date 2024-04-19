#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cin>>r;
    c = r;

    int arr[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }

    int diag1 = 0;
    int diag2 = 0;
    int diff = 0;

    for(int i=0; i<r; i++){
        diag1 += arr[i][i];
    }

    int j = r-1;
    for(int i=0; i<r; i++){
        diag2 = diag2 + arr[i][j];
        // cout<<arr[i][j]<<" ";
        j--;
    }

    diff = abs(diag1 - diag2);
    cout<<diff<<endl;    

return 0;
}