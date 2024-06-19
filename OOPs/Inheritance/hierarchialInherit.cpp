#include<iostream>
using namespace std;

//Implementation of Hierarchial Inheritance.

class vehicle{
    public:
        vehicle(){
            cout<<"I am a vehicle class."<<endl;
        }
};

class car : public vehicle{
    public:
        car(){
            cout<<"I am a car class."<<endl;
        }
};

class maruti : public car{
    public:
        maruti(){
            cout<<"I am a maruti car class."<<endl;
        }
};

int main(){
    maruti obj;
}