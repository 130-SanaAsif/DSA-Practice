#include<bits/stdc++.h>
using namespace std;

bool knows(vector<vector<int>>m, int a, int b){
    if(m[a][b] == 1){
        return true;
    }
    else{
        return false;
    }
}

int celebrity(vector<vector<int>>m, int n ){
    stack<int>st;

    for(int i=0; i<n; i++){
        st.push(i);
    }

    while(st.size() > 1){
        int a = st.top();
        st.pop();

        int b = st.top();
        st.pop();

        if(knows(m,a,b)){
            st.push(b);
        }
        else{
            st.push(a);
        }
    }

    int ans = st.top();

    int zeroCount = 0;
    for(int i=0; i<n; i++){
        if(m[ans][i] == 0){
            zeroCount++;
        }
    }

    if(zeroCount != n){
        return -1;
    }

    int oneCount = 0;
    for(int i=0; i<n; i++){
        if(m[i][ans] == 1){
            oneCount++;
        }
    }

    if(oneCount != n-1){
        return -1;
    }

    return ans;
}

int main(){
    vector<vector<int>>m = {{0,0,1,0,0},
                            {0,0,1,0,1},
                            {0,0,0,0,0},
                            {0,0,1,1,1},
                            {1,0,1,0,0}};
    int n = 5;

    int ans = celebrity(m,n);
    cout<<"The celebrity is "<<ans<<endl;

    return 0;
}