#include<bits/stdc++.h>
using namespace std;

//Parent/Super Class.
class Animal{
public:
    int legs;
    int age;
    int weight;
    int height;
    string color;

    void eat(){
        cout<<"Eating"<<endl;
    }
};

//Child/Sub Class
//we represent the inherit method by using : symbol.
class Dog : public Animal{//Inheriting the property of parent class,
    public:               //which is Animal class.
        void bark(){
            cout<<"Barking"<<endl;
        }
};

class cat : public Animal{
    public:
        void meow(){
            cout<<"Meow Meow"<<endl;
        }        
};

// class base{
//     public:
//         void show(){
//             cout<<"This is a base class"<<endl;
//         }
// };

// class child : public base{
//     public:
//         void show2(){
//             show();
//             cout<<"This is a child class"<<endl;
//         }
// };

int main(){
    Dog d;
    cat c;
    d.age = 7;
    cout<<d.age<<endl;
    d.bark();
    d.eat();

    c.legs = 4;
    cout<<c.legs<<endl;
    c.meow();

    // child e;
    // e.show2();
return 0;
}