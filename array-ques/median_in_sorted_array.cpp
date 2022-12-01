#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int MedianMatrix(vector<vector<int>>& arr, int r, int c){
    int mn = INT_MIN;
    int mx = INT_MAX;
    for(int i=0; i<r; i++){
        mn = min(mn, arr[i][0]);
        mx = max(mx, arr[i][c-1]);
    }
    while(mn < mx){
        int mid = (mn+mx)/2;
        int x=0;
        for(int i=0; i<r; i++){
            int ub = (int)(upper_bound(arr[i].begin(), arr[i].end(), mid) - arr[i].begin());
            x += ub;
        }
        if(x<((r*c+1)/2)){
            mn = mid+1;
        }
        else{
            mx = mid;
        }
    }
    return mn;
}

int main(){
    int r = 3, c =3;
    vector<vector<int>>arr = { {1,3,5}, {2,6,9}, {3,6,9} };
    cout<<"Median is "<<MedianMatrix(arr, r, c);
    return 0;
}