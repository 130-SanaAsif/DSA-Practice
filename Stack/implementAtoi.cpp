#include<bits/stdc++.h>
using namespace std;

int myAtoi(string s){
    
    int i = 0 , n = s.size();

    while(s[i] == ' '){ //Removing leading spaces.
        i++;
    }

    int pos = 0, neg = 0;

    if(s[i] == '+'){ //check for + sign.
        pos++;
        i++;
    }

    if(s[i] == '-'){ //check for - sign.
        neg++;
        i++;
    }

    double ans = 0;

    while(i < n && s[i] >= '0' && s[i] <= '9'){
        ans = ans*10 + (s[i]-'0'); //coverting to integer.
        i++;
    }

    if(neg > 0){ //check for - sign if it is then return ans in negative.
        ans = -ans;
    }

    if(pos > 0 && neg > 0){ //check if + and - sign both present.
        return 0;
    }

    if(ans < INT_MIN){ //if ans < 2^31
        ans = INT_MIN;
    }

    if(ans > INT_MAX){ //if ans > 2^31 - 1
        ans = INT_MAX;
    }

    return (int)(ans);
}

int createAtoi(string s){

    if(s.size() == 0){
        return 0;
    }

    int i = 0;
    while(i < s.size() && s[i] == ' '){
        i++;
    }

    s = s.substr(i);

    int sign = +1;
    long ans = 0;

    if(s[0] == '-'){
        sign = -1;
    }

    int maxi = INT_MAX , mini = INT_MIN;

    i = (s[0] == '+' || s[0] == '-') ? 1 : 0;

    while(i < s.size()){
        if(s[0] == ' ' || !isdigit(s[i])){
            break;
        }
        ans = ans*10 + (s[i]-'0');

        if(sign == -1 && -1*ans < mini){
            return mini;
        }

        if(sign == 1 && ans > maxi){
            return maxi;
        }

        i++;
    }

    return (int)(sign*ans);
}
int main(){
    string s;
    cin>>s;

    // int res = myAtoi(s);
    int res = createAtoi(s);
    cout<<res;

    return 0;
}