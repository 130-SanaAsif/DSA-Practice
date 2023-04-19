#include<bits/stdc++.h>
using namespace std;

bool wifiRange(int N, string S, int X){
        // code here
        int freq[N+1] = {0};
        for(int i=0; i<N; i++){
            if(S[i] == '1')
            {
                int left=max(i-X,0);
                int right=min(i+X,N-1);
                freq[left]++;
                freq[right+1]--;
            }
        }
        for(int i=0;i<N;i++)
        {
            if(i>0) freq[i]+=freq[i-1];
            if(freq[i]==0) // no access to wifi here
                return false;
        }
        return true;
}
int main(){
    string s = "010";
    int x = 0;
    bool res = wifiRange(3,s,x);
    cout<<res;
    return 0;
}