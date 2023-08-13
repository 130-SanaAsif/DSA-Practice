#include<iostream>
#include<math.h>
using namespace std;

int isRoundNum(int n){
    if(n == 0){
        return -1;
    }
    int ans = 0;
    while(n != 0){
        int rem = n%10;
        int res = pow(2,rem);
        ans = ans+res;
        n = n/10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<"Given : "<<endl;
    int res = isRoundNum(n);
    cout<<res;

    return 0;
}