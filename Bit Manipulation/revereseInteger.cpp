#include<bits/stdc++.h>
using namespace std;

// string RevInt(int n){
//     // string res = "";
//     // while(n > 0){
//     //     // if(r > INT_MAX/10 || r < INT_MIN/10) return 0;
//     //     // r = r*10 + n%10;
//     //     // n = n/10;

//     //     int digit = n%10;
//     //     res += to_string(digit);
//     //     n /= 10;
//     // }
//     // return res;
// }

int main(){
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    // string res = RevInt(n);
    cout<<s;
    return 0;
}