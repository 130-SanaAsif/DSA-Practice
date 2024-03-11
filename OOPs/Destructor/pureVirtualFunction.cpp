#include<bits/stdc++.h>
using namespace std;

class base{
public:
//virtual destructor.
    virtual ~base() = 0;
};

//External destructor define.
base :: ~base(){
    cout<<"Pure Virtual Destructor is called."<<endl;
}

class child : public base{
public:
    ~child(){
        cout<<"Derived() is executed."<<endl;
    }
};

int main(){
    child *ob = new child;
    delete ob;
return 0;
}