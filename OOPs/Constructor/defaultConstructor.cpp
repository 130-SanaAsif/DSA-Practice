#include<iostream>
using namespace std;

//Implicit Default Constructor.
// class base{
// public:
//     int a;
//     int b;

//     int sum(){
//         return a+b;
//     }
// };

// int main(){
//     base bs;//At the time of object creation automatically constructor invokes.
//     //this is called implicit default constructor.

//     bs.a = 10;
//     bs.b = 20;

//     cout<<"The sum of a and b "<<bs.sum()<<endl;

//     return 0;
// }

//Explixitly Default Constructor.
class car{
public:
    int wheel;
    int mileage;
    int speed_limit;

    //Constructor;
    car(){
        wheel = 4;
        mileage = 90;
        speed_limit = 200;
    }
};

int main(){
    car honda;
    cout<<"Wheels : "<<honda.wheel<<endl;
    cout<<"Speed Limit : "<<honda.speed_limit<<endl;
    cout<<"Mileage : "<<honda.mileage<<endl;

    return 0;
}