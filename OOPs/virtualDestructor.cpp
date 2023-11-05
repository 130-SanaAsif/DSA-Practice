#include<bits/stdc++.h>
using namespace std;

class base{
public:
    base(){
        cout<<"Constructor base."<<endl;
    }

    virtual ~base(){
        cout<<"Destructor base"<<endl;
    }
};

class child : public base{
public:
    child(){
        cout<<"Constructor child."<<endl;
    }

    ~child(){
        cout<<"Destructor child."<<endl;
    }
};

int main(){
    child *c = new child;
    base *b = c;
    delete b;
return 0;
}