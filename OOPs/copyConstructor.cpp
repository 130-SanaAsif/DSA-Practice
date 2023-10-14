#include<bits/stdc++.h>
using namespace std;

//Copy Constructor Explicit way.
class Original{
private:
    int x;

public:
    Original(int x){
        this->x = x;
        cout<<x<<" Costructor is called."<<endl;
    }

    //Copy Constructor
    Original(Original &t){
        x = t.x;
        cout<<x<<" Copy Constructor is called."<<endl;
    }
};

//Copy Constructor implicit way.
class car{
public:
    int wheels;
    int mileage;
    int speed;

    void display(){
        wheels = 4;
        mileage = 90;
        speed = 100;

        cout<<"Wheels - "<<wheels<<endl;
        cout<<"Mileage - "<<mileage<<endl;
        cout<<"Speed - "<<speed<<endl;
    }
};

//Member by member intialization.
class student{
private:
    int rno;
    string name;
    double fee;
public:
    student(int,string,double);

    student(student &t){
        rno = t.rno;
        // strcpy(name,t.name);
        name = t.name;
    }

    void display();
    void disp(){
        cout<<rno<<" "<<name<<" "<<endl;
    }
};

student::student(int no, string n, double f){
    rno = no;
    // strcpy(name,n);
    name = n;
    fee = f;
}

void student::display(){
    cout<<rno<<" "<<name<<" "<<fee<<endl;
}



int main(){
    Original o(10);
    Original copy(o);


    student st(102,"Sana",10000);
    st.display();

    student s(st);
    s.disp();

    cout<<"Constructor is called"<<endl;
    car honda;
    honda.display();

    cout<<"Copy constructor is called"<<endl;
    car suzuki(honda);
    suzuki.display();
    return 0;
}