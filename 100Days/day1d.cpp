#include<bits/stdc++.h>
using namespace std;

int main(){
int q;
    cin>>q;

    unordered_map<int,int>mp;

    while(q--){
      int a,b;
      cin >> a >> b;
      mp[b] += a;
    }

    int high_freq = 0, low_freq=INT_MAX;
    int high_num = 0, low_num = 0;

    for(auto it : mp){
      if(it.second == high_freq){
        high_num = max(high_num,it.first);
      }
      else if(it.second > high_freq){
        high_freq = it.second;
        high_num = it.first;
      }
      if(it.second == low_freq){
        low_num = min(low_num, it.first);
      }
      else if(it.second <= low_freq){
        low_freq = it.second;
        low_num = it.first;
      }
    
    }
     
    cout<< abs(high_num-low_num) << endl;

return 0;
}