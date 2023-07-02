#include<bits/stdc++.h>
using namespace std;

int traffic(vector<int>arr, int n, int m){
    for(int i=m; i>=0; i--){
        if(arr[i] == 0){
            arr[i] = 1;
        }
    }
    int cnt = 0;
	for(int i=0; i<n; i++){
		if(arr[i] == 1){
			cnt++;
		}
	}
	return cnt;
}

int main(){
    vector<int>arr = {0,1,0,0,1,0};
    int n = 6;
    int m = 3;

    int res = traffic(arr,n,m);
    cout<<res;
}