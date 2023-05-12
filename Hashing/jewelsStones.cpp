#include<bits/stdc++.h>
using namespace std;

int jewelsStone(string jewels, string stones){
    unordered_map<char,char>mp;
    int cnt=0;
    for(int i=0; i<jewels.size(); i++){
        mp[jewels[i]]++;
    }
    for(int i=0; i<stones.size(); i++){
        if(mp.find(stones[i]) != mp.end()){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    string jewels = {"z"};
    string stones = {"ZZZZ"};
    int res = jewelsStone(jewels,stones);
    cout<<res;
    return 0;
}