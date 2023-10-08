#include<iostream>
using namespace std;

class Base{
private:
    int a;
protected:
    int b;
public:
    Base(){
        a = 90;
        b = 100;
    }

    friend class fri;
};

class fri{
public:
    void display(Base& t){
        cout<<"Value of a - "<<t.a<<endl;
        cout<<"Value of b - "<<t.b<<endl;
    }
};

int main(){
    Base b;
    fri c;
    c.display(b);

    return 0;
}