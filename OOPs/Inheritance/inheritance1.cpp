// #include <iostream> 
// using namespace std; 

// //Example: define member function without argument within the class
// class Person { 
// 	int id; 
// char name[100]; 

// public: 
// 	void set_p() 
// 	{ 
// 		cout << "Enter the Id:"; 
// 		cin >> id; 
// 		cout << "Enter the Name:"; 
// 		cin >> name; 
// 	} 

// 	void display_p() 
// 	{ 
// 		cout << endl <<"Id: "<< id << "\nName: " << name <<endl; 
// 	} 
// }; 

// class Student : private Person { 
// char course[50]; 
// 	int fee; 

// public: 
// 	void set_s() 
// 	{ 
// 		set_p(); 
// 		cout << "Enter the Course Name:"; 
// 		cin >> course; 
// 		cout << "Enter the Course Fee:"; 
// 		cin >> fee; 
// 	} 

// 	void display_s() 
// 	{ 
// 		display_p(); 
// 		cout <<"Course: "<< course << "\nFee: " << fee << endl; 
// 	} 
// }; 

// int main() 
// { 
// 	Student s; 
// 	s.set_s(); 
// 	s.display_s(); 
// 	return 0; 
// }


// Example: define member function without argument outside the class
// #include<bits/stdc++.h>
// using namespace std;

// class Person{
//     private:
//         int ID;
//        char name;
//     public:
//         void set_p();
//         void display_p();
// };

// void Person :: set_p(){
//     cout<<"Enter the ID : ";
//     cin>>ID;
//     cout<<"Enter the name : ";
//     cin>>name;
// }

// void Person :: display_p(){
//     cout<<"\n ID : "<<ID<<"\n Name : "<<name;
// }

// class Student : private Person{
//     private:
//        char course;
//         int fee;
//     public:
//         void set_c();
//         void display_c();
// };

// void Student :: set_c(){
//     set_p();
//     cout<<"Enter the Course : ";
//     cin>>course;
//     cout<<"Enter the fee : ";
//     cin>>fee;
// }

// void Student :: display_c(){
//     display_p();
//     cout<<"\n Course : "<<course<<"\n Fee : "<<fee;
// }

// int main(){
//     Student s;
//     s.set_c();
//     s.display_c();
// return 0;
// }


// Example: define member function with argument outside the class
#include<bits/stdc++.h>
using namespace std;
class person{
    private:
        int id;
        char name[100];
    public:
        void set_p(int,char[]);
        void display_p();
};

void person :: set_p(int id,char n[]){
    this->id = id;
    strcpy(this->name, n);
}

void person :: display_p(){
    cout<<id<<" "<<name;
}

class course : private person{
    int fee;
    char courName[100];
    public:
        void set_s(int ,char[],int,char[]);
        void display_s();
};

void course :: set_s(int f,char n[],int id ,char np[]){
    set_p(id,np);
    this->fee = f;
    strcpy(courName, n);
}

void course :: display_s(){
    display_p();
    cout<<" "<<fee<<" "<<courName<<endl;
}

int main(){
    course c;
    c.set_s(1001, "Sana", 1031, "ML");
    c.display_s();
return 0;
}