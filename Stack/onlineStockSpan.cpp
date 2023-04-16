#include<bits/stdc++.h>
using namespace std;

//int next(int price) {
//    stack<pair<int,int>>st;
//        int ans = 1;
//        while(!st.empty() && st.top().first <= price){
//            ans += st.top().second;
//            st.pop();
//        }
//        st.push({price,ans});
//        return ans;
//}

vector<int>StockSpan(vector<int>price){
    stack<int>s;
    vector<int>ans;

    for(int i=0; i<price.size();i++){
        while(!s.empty() and price[s.top()] <= price[i])
                s.pop();
            if(s.empty()){
                ans.push_back(i+1);
            }
            else{
                int top = s.top();
                ans.push_back(i-top);
            }
            s.push(i);
       }
    return ans;
}

int main(){
    vector<int>arr = {100,80,60,70,60,75,85};
    vector<int>ans;
    ans = StockSpan(arr);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}