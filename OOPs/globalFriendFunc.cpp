#include<iostream>
using namespace std;

class base{
private:
    int a;
protected:
    int b;
public:
    base(){
        a = 10;
        b = 99;
    }

    friend void fri(base& obj);
};

void fri(base& obj){
    cout<<"Value of a = "<<obj.a<<endl;
    cout<<"Value of b = "<<obj.b<<endl;
}

int main(){
    base ob;
    fri(ob);

    return 0;
}