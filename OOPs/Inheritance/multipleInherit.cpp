#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"Biryani";
    }
};

class B{
    public:
    B(){
        cout<<" khalo";
    }
};

class C : public A, public B{
    public:
    C(){
        cout<<" friends.";
    }
};

int main(){
    C khao;
return 0;
}