#include<bits/stdc++.h>
using namespace std;

class Base{
public:
    //Constructor
    Base(){

    }

    //Virtual Destructor.
    virtual
    ~Base(){

    }

    //virtual function.
    virtual void changeAttributes() = 0;

    //the virtual constructor.
    static Base *create(int id);

    //the virtual copy constructor.
    virtual Base *clone() = 0;
};

class derived1 : public Base{
public:
    //Default Constructor.
    derived1(){
        cout<<"Derived1 is created (constructor called)."<<endl;
    }

    derived1(const derived1&rhs){
        cout<<"Derived1 created by deep copy."<<endl;
    }

    //Destructor.
    ~derived1(){
        cout<<"Derived1 destroyed (destructor called)."<<endl;
    }

    void changeAttributes(){
        cout<<"Derived1 attributed changed."<<endl;
    }

    Base *clone(){
        return new derived1(*this);
    }
};

class derived2 : public Base{
public:
    derived2(){
        cout<<"Derived2 created (constructor called)."<<endl;
    }
    
    derived2(const derived2& rhs){
        cout<<"Derived2 created by deep copy."<<endl;
    }

    ~derived2(){
        cout<<"Derived2 destroyed (destructor called)."<<endl;
    }

    void changeAttributes(){
        cout<<"Derived2 attribute changed"<<endl;
    }

    Base *clone(){
        return new derived2(*this);
    }
};

class derived3 : public Base{
public:
    derived3(){
        cout<<"Derived3 created (constructor called)."<<endl;
    }

    derived3(const derived3&rhs){
        cout<<"Derived3 created by deep copy."<<endl;
    }
    ~derived3(){
        cout<<"Derived3 destroyed (destructor called)."<<endl;
    }

    void changeAttributes(){
        cout<<"Derived3 attribute changed"<<endl;
    }

    Base *clone(){
        return new derived3(*this);
    }
};

Base *Base :: create(int id){

    if(id == 1){
        return new derived1;
    }
    else if(id == 2){
        return new derived2;
    }
    else{
        return new derived3;
    }
}

class User{
private:
    Base *pBase;
public:
User() : pBase(0){

        int input;
        cout<<"Step 1"<<endl;
      cout << "Enter ID (1, 2 or 3): ";
      cin >> input;
      while( (input != 1) && (input != 2) && (input != 3) ){
         cout << "Enter ID (1, 2 or 3 only): ";
         cin >> input;
      }
      pBase = Base::create(input);

    } 

    ~User(){
        if(pBase){
            delete pBase;
            pBase = 0;
        }
    }

    void Action(){
        // Duplicate current object
        cout<<"Step 2"<<endl;
        Base *pNewBase = pBase ->clone();

        // Change its attributes
        pNewBase->changeAttributes();

        // Dispose the created object
        delete pNewBase;
    }

};


int main(){
    User *user = new User();
    user->Action();
return 0;
}