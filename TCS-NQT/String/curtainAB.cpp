#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Value of string -> ";
    cin>>s;
    int l;
    cout<<"Value of l -> ";
    cin>>l;
    int maxCnt = 0;
    int cnt = 0;
    int n = s.size();

    if(n%l != 0){
        if(s[n-1] == 'a'){
            maxCnt = 1;
        }
    }

    for(int i=0; i<n; i++){
        if(i%l == 0){
            if(cnt > maxCnt){
                maxCnt = cnt;
                cnt = 0;
            }
        }

        if(s[i] == 'a'){
            cnt++;
        }
    }
    cout<<maxCnt<< " -> maximum no's of a's"<<endl;
return 0;
}