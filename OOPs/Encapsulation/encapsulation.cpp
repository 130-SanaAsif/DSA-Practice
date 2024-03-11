#include<bits/stdc++.h>
using namespace std;

// class student{
// private:
//     string studentName;
//     int age;
//     int rollno;

// public:
//     string getName(){
//         return this->studentName;
//     }
//     int getAge(){
//         return this->age;
//     }
//     int getRollno(){
//         return this->rollno;
//     }
// };

// class temp{
// private:
//     int a;
//     int b;
// public:
//     int solve(int x){
//         a = x;
//         b = a/2;
//         return b;
//     }
// };

class person{
private:
    string name;
    int age;
public:
    person(string name, int age){
        this->name = name;
        this->age = age;
    }

    void setName(string name){
        this->name = name;
    }

    string getName(){
        return name;
    }

    void setAge(int age){
        this->age = age;
    }

    int getAge(){
        return age;
    }
};

int main(){
    // student s;
    // int x;
    // cin>>x;
    // temp half;
    // int ans = half.solve(x);
    // cout<<ans;

    person p("John Doe", 30);

    cout<<"Name - "<<p.getName()<<endl;
    cout<<"Age - "<<p.getAge()<<endl;

    p.setName("Jane Doe");
    p.setAge(34);

    cout<<"Name - "<<p.getName()<<endl;
    cout<<"Age - "<<p.getAge()<<endl;

return 0;

}