#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
        Base(){
            cout<<"1 Consturctor Base Called."<<endl;
        }

        virtual ~Base(){
            cout<<"4 Destructor Base Called."<<endl;
        }

};

class child : public Base{
    public:
        child(){
            cout<<"2 Constructor Derived Called."<<endl;
        }

        ~child(){
            cout<<"3 Destructor Derived Called."<<endl;
        }
};

int main(){
    child *derived = new child();
    Base *original = derived;
    delete original;
    return 0;
}