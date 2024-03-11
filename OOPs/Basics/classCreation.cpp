#include<iostream>
//#include "car.cpp" //-> Implicitly way to define class.
using namespace std;
//Explicitly way to define class.

class car{
//By default every class is private.
//Private modifiers allow to use the data member only inside the class, doesn't allow to use outside the class.
public: //->Acces Modifiers
//Public modifiers allow to use the data member botn inside the class and aouside the class.
    int wheels;
    int speed_limit;
    int mileage;
};

int main(){
    car honda;

    //How to acces and asign the data member of the class.
    //Using "." operator.

    honda.wheels = 4;
    honda.speed_limit = 200;
    honda.mileage = 7;

    cout<<"Wheels : "<<honda.wheels<<endl;
    cout<<"Speed Limit : "<<honda.speed_limit<<endl;
    cout<<"Mileage : "<<honda.mileage<<endl;

    //It will give output 12, because sizeof return the size of integer which
    //is 4 byte. so, 4+4+4 = 12.
    // cout<<"size : "<<sizeof(honda)<<endl;
    
    return 0;
}