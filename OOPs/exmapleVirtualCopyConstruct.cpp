#include<bits/stdc++.h>
using namespace std;

class figure{
public:
    //Constructor.
    figure(){

    }

    //Destructor.
    ~figure(){

    }

    //virtual function.
    virtual void changeAttributes() = 0;

    //virtual constructor.
    static figure *create(int id) ;

    //virtual copy consturctor.
    virtual figure *clone() = 0;
};

class square : public figure{
public:
    square(){
        cout<<"Square is created (Constructor created)."<<endl;
    }

    square(const square&rhs){

    }

    ~square(){

    }

    void changeAttributes(){
        int a;
        cout<<"The side of square : "<<endl;
        cin>>a;
        cout<<"The area of square = "<<a*a<<endl;
    }

    figure *clone(){
        return new square(*this);
    }
};

class circle : public figure{
public:
    circle(){
        cout<<"Circle is created (Constructor created)."<<endl;
    }

    circle(const circle&rhs){

    }

    ~circle(){

    }

    void changeAttributes(){
        int r;
        cout<<"The radius of circle : "<<endl;
        cin>>r;
        cout<<"The area of circle = "<<((3.14)*r*r)<<endl;
    }

    figure *clone(){
        return new circle(*this);
    }
};

class rectangle : public figure{
public:
    rectangle(){
        cout<<"Rectangle is created (Constructor created)."<<endl;
    }

    rectangle(const rectangle&rhs){

    }

    void changeAttributes(){
        int l, b;
        cout<<"Enter the length of rectangle : "<<endl;
        cin>>l;
        cout<<"Enter the breadth of rectangle : "<<endl;
        cin>>b;

        cout<<"The area of rectangle = "<<l*b<<endl;
    }

    figure *clone(){
        return new rectangle(*this);
    }
};

figure *figure :: create(int id){

    if(id == 1){
        return new square;
    }
    else if(id == 2){
        return new circle;
    }
    else{
        return new rectangle;
    }
}

class User{
private:
    figure *pfig;
public:
    User() : pfig(0){
        int input;
        cout<<"Enter ID (1, 2 or 3 only) : "<<endl;
        cin>>input;

        while((input != 1) && (input != 2) && (input != 3)){
            cout<<"Enter ID (1, 2 or 3 only) : "<<endl;
            cin>>input;
        }

        pfig = figure::create(input);

    }

    ~User(){
        if(pfig){
            delete pfig;
            pfig = 0;
        }
    }

    void Action(){
        //Duplicate current object.
        figure *pnewFig = pfig -> clone();
        //change its attributes.
        pnewFig -> changeAttributes();
        //Dispose the create object.
        delete pnewFig;
    }
};

int main(){
    User *user = new User();
    user->Action();
return 0;
}