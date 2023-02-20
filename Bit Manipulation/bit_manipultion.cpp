#include<bits/stdc++.h>
using namespace std;

void bitManipulation(int num, int i){
    int g = (num & (1<<(i-1)));
    if(g){
        cout<<1<<" ";
    }
    else{
        cout<<0<<" ";
    }

    int s = (num | (1<<(i-1)));
    cout<<s<<" ";

    int c = (num & (~(1<<(i-1))));
    cout<<c<<" ";
}

int main(){
    int num = 70;
    int i = 3;
    bitManipulation(num,i);
    return 0;
}
    