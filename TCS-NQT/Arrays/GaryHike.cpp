#include<bits/stdc++.h>
using namespace std;

int func(long long n, string step){
    long long level = 0;
    int vall = 0;

    for(long long i=0; i<n; i++){
        if(step[i] == 'U'){
            level++;
        }
        else{
            level--;
            if(level == 0){
                vall++;
            }
        }
    }
    return vall;
}

int main(){
    long long n;
    cin>>n;
    // char arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    string step;
    cin>>step;
    cout<<func(n,step);
    
    
return 0;
}