// #include <iostream> 
// using namespace std; 

// class Person { 
// 	int id; 
// 	char name[100]; 

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
// 	char course[50]; 
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


#include<bits/stdc++.h>
using namespace std;

class Person{
    private:
        int ID;
        string name;
    public:
        void set_p();
        void display_p();
};

void Person :: set_p(){
    cout<<"Enter the ID : ";
    cin>>ID;
    cout<<"Enter the name : ";
    cin>>name;
}

void Person :: display_p(){
    cout<<"\n ID : "<<ID<<"\n Name : "<<name;
}

class Student : private Person{
    private:
        string course;
        int fee;
    public:
        void set_c();
        void display_c();
};

void Student :: set_c(){
    set_p();
    cout<<"Enter the Course : ";
    cin>>course;
    cout<<"Enter the fee : ";
    cin>>fee;
}

void Student :: display_c(){
    display_p();
    cout<<"\n Course : "<<course<<"\n Fee : "<<fee;
}

int main(){
    Student s;
    s.set_c();
    s.display_c();
return 0;
}