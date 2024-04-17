#include<bits/stdc++.h>
using namespace std;

int main(){
    int v, w;
    cin>>v;
    cin>>w;

    if(v<w && 2 <= w && w%2 == 0){
        int y = (w-(2*v))/2;
        int x = v - y;
        cout<<x<<" "<<y<<endl;

    }
    else{
        cout<<"INVALID INPUT"<<endl;
    }
return 0;
}