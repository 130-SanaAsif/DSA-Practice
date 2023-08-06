#include<bits/stdc++.h>
using namespace std;
//Brute Force.
int DigitRoot(int n){
    int ans = 0;
    
    while(n != 0){
        int rem = n%10;
        ans = ans+rem;
        n = n/10;
    }
    return ans;
}

int digitalRoot(string s){
    if(s.compare("0") == 0){
        return 0;
    }

    int ans = 0;
    for(int i=0; i<s.size(); i++){
        ans = (ans + s[i]-'0')%9;
    }

    return(ans == 0)?9:ans%9;
}

int main(){
    // int n;
    // cin>>n;
    // cout<<"Given : "<<n<<endl;
    string s;
    cin>>s;
    cout<<"Given : "<<s<<endl;
    int res = digitalRoot(s);
    cout<<res<<endl;
    //Brute Force Approach.
    // int ans = 0;
    // if(res < 9){
    //      cout<<res<<endl;
    // }
    // else{
    //     while(res){
    //         int rem = res%10;
    //         ans = ans+rem;
    //         res = res/10;
    //     }
    //     cout<<ans<<endl;
    // }

    return 0;
}