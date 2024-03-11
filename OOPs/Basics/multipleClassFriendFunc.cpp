
// C++ Program to demonstrate how friend functions work as a bridge between the classes
#include<iostream>
using namespace std;

class ABC;

class XYZ{
    int x;
public:
    void set_data(int a){
        x = a;
    }

    friend void max(XYZ, ABC);
};

class ABC{
    int y;
public:
    void set_data(int b){
        y = b;
    }

    friend void max(XYZ, ABC);
};

void max(XYZ t1, ABC t2){
    if(t1.x > t2.y){
        cout<<t1.x<<endl;
    }
    else{
        cout<<t2.y<<endl;
    }
}

int main(){
    ABC abc;
    XYZ xyz;

    abc.set_data(20);
    xyz.set_data(30);

    max(xyz, abc);

    return 0;
}