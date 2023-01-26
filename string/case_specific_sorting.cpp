#include<bits/stdc++.h>
using namespace std;

string caseSort(string str){
    int n = str.length();
    string low = "", high = "", ans = "";
    for(auto x:str){
        if(isupper(x)){
            high+=x;
        }
        else{
            low+=x;
        }
    }
    sort(low.begin(), low.end());
    sort(high.begin(), high.end());
    int i=0, j=0;
    for(auto x:str){
        if(isupper(x)){
            ans+=high[j];
            j++;
        }
        else{
            ans+=low[i];
            i++;
        }
    }
    return ans;
}

int main(){
    string str = "defRTSersUXI";
    string res = caseSort(str);
    cout<<res;
    return 0;
}