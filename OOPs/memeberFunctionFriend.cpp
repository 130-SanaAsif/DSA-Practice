#include<iostream>
using namespace std;

class base;

class anotherClass{
public:
    void memberFunction(base& obj);
};

class base{
private:
    int a;
protected:
    int b;
public:
    base(){
        a = 90;
        b = 100;
    }

    friend void anotherClass::memberFunction(base& obj);
};

void anotherClass::memberFunction(base&obj){
    cout<<"Value of a = "<<obj.a<<endl;
    cout<<"Value of b = "<<obj.b<<endl;
}

int main(){
    base obj1;
    anotherClass obj2;
    obj2.memberFunction(obj1);

    return 0;
}