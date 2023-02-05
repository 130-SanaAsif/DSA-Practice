#include<iostream>
using namespace std;

int find(int m, int n){
    if(m == 1 || n == 1){
        return 1;
    }
    return find(m, n-1) + find(m-1, n);
}

int main(){
    int m = 4, n = 4;
    int res = find(m,n);
    cout<<res;
    return 0;
}