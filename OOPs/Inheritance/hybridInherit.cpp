#include<iostream>
using namespace std;

// Implementation of hybrid Inheritance.

class A{
    protected:
    int a;
    public:
        void set_A(){
            cout<<"Value of A: ";
            cin>>a;
        }
};

class B:public A{
    protected:
    int b;
    public:
        void set_B(){
            cout<<"Value of B: ";
            cin>>b;
        }
};

class C{
    protected:
    int c;
    public:
        void set_C(){
            cout<<"Value of C: ";
            cin>>c;
        }
};

class D:public B, public C{
    public:
        void mul(){
            set_A();
            set_B();
            set_C();

            cout<<"Multiplication of a,b,c = "<<a*b*c;
        }
};

int main(){
    D obj;
    obj.mul();
}