#include<iostream>
using namespace std;

int josephus(int n, int k){
    if(n==1){
        return 0;
    }
    return(josephus(n-1,k)+k)%n;
}

int main(){
    int n = 6,k = 2;
    int res = josephus(n,k);
    cout<<res;
    return 0;
} 