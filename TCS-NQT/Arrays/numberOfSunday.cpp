#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int day;
    cin>>day;

    string arr[] = {"mon","tue","wed","thu","fri","sat","sun"};
    int i;
    for(i=0; i<7; i++){
        if(str == arr[i]){
            break;
        }
    }

    int remanining = 6-i;
    day = day-remanining;
    int ans = 1;
    if(day > 0){
        ans += (day/7);
    }
    cout<<ans<<endl;

return 0;
}