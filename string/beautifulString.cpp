#include<bits/stdc++.h>
using namespace std;

int CountString(string s){
    int sum = 0;
    int n = s.size();

    int num = 0;
    //Changing string to integer to get maximum digit.
    for(int i=0; i<n; i++){
        num = num * 10 + (int(s[i]) - 48);
        cout << num;
    }

    int maxi = 0;
    while(num != 0){
        int r = num % 10;
        maxi = max(r, maxi); 
        num = num / 10;
    }


    for(int i=0; i<n; i++){
        unordered_map<char,int>mp;
        for(int j=i; j<n; j++){
            mp[s[j]]++;
            int freq = 0;
            for(auto it:mp){
                freq = max(freq, it.second);
            }
            sum += 1;
        }
    }
    return sum;
}

int main(){
    string s;
    getline(cin,s);

    int res = CountString(s);
    cout<<res<<endl;
}