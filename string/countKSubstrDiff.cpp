#include<bits/stdc++.h>
using namespace std;

int countSubstr(string s, int k){
    int cnt = 0;
    for(int i=0; i<s.size(); i++){
        for(int j=i+1; j<s.size()+1; j++){
            string sub = s.substr(i,j-i);
            map<char,int>hash;
            
            for(int l=0; l<sub.size(); l++){
                if(hash.find(sub[l]) != hash.end()){
                    hash[sub[l]] += 1;
                }
                else{
                    hash[sub[l]] = 1;
                }
            }
            if(hash.size() == k){
                cnt++;
            }
        }
    }
    return cnt;
}

//Better Approach.
//TC - O(n^2).
//SC - O(1).
int countKSubstr(string s, int k){
    int res = 0;

    vector<int>map(26);
    for(int i=0; i<s.size(); i++){
        int disChar = 0;
        fill(map.begin(),map.end(),0);
        for(int j=i; j<s.size(); j++){
            if(map[s[j]-'a'] == 0){
                disChar++;
            }
            map[s[j] - 'a']++;
            if(disChar == k){
                res++;
            }
        }
    }
    return res;
}

//Optimised Approach.
//TC - O(n).
//SC - O(1).
int helper(string s, int k){
    int i=0, j=0, currCnt=0;
    int res = 0;

    vector<int>count(26,0);
    while(j < s.size()){
        int index = s[j]-'a';
        count[index]+=1;
        if(count[index] == 1){
            currCnt++;
        }

        while(currCnt > k){
            count[s[i] - 'a']--;
            if(count[s[i]-'a'] == 0){
                currCnt--;
            }
            i++;
        }
        res += (j-i+1);
        j++;
    }
    return res;
}

int countDiffSubstr(string s, int k){
    int ans = helper(s,k) - helper(s,k-1);
    return ans;
}
int main(){
    string s = "aacfssa";
    int k = 3;

    int res = countDiffSubstr(s,k);
    cout<<res<<endl;

    return 0;
}