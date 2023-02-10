#include<iostream>
#include<string>
using namespace std;

int maxInstance(string s){
    int arr[26] = {0};
    for(int i=0; i<s.length(); i++){
        arr[s[i] - 'a']++;
    }
    int ans = 0;
    while(true){
        if(arr['b' - 'a'] and arr['a' - 'a'] and (arr['l' - 'a'] > 1) and (arr['o' - 'a']>1) and arr['n' - 'a']){
            ans++;
            arr['b' - 'a']--;
            arr['a' - 'a']--;
            arr['l' - 'a']-=2;
            arr['o' - 'a']-=2;
            arr['n' - 'a']--;
        }
        else{
            return ans;
        }
    }
}

int main(){
    string s = "loonbalxballpoon";
    int res = maxInstance(s);
    cout<<"We can make "<<res<<" ballon from this "<<s<<" string";
    return 0;
}