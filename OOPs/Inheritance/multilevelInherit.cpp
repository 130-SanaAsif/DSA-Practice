#include<iostream>
using namespace std;

//Implementation of Multilevel Inheritance.
class vehicle{
    public:
        vehicle(){
            cout<<"This is a vehicle class."<<endl;
        }
};

class car : public vehicle{
    public:
        car(){
            cout<<"This is a car class."<<endl;
        }
};

class maruti: public car{
    public:
        maruti(){
            cout<<"This is a Multilevel Inheritance."<<endl;
        }
};

int main(){
    maruti obj;
}