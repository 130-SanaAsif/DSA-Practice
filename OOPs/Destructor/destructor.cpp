#include<bits/stdc++.h>
using namespace std;

class base{
public:

    base(){
        cout<<"Constructor called."<<<<endl;
    }

    ~base(){
        cout<<"Destructor called."<<endl;
    }
};

int main(){
    base b;
    base *ob = new base;
    delete ob;
return 0;
}