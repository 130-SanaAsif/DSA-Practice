#include<iostream>
using namespace std;

class Swap{
private:
    int a;
protected:
    int b;
public:
    Swap(){
        a = 10;
        b = 90;
    }

    friend class fri;
};

class fri{
public:
    void display(Swap& t){
        int c,d;
        c = t.a;
        d = t.b;

        cout<<"Before Swapping :"<<endl;
        cout<<"Value of a = "<<c<<endl;
        cout<<"Value of b = "<<d<<endl;

        c = c^d;
        d = c^d;
        c = c^d;

        cout<<"After Swapping :"<<endl;
        cout<<"Value of a = "<<c<<endl;
        cout<<"Value of b = "<<d<<endl;
    }
};

int main(){
    Swap e;
    fri f;
    f.display(e);

    return 0;
}