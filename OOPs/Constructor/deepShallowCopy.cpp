#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

class Bird{
private:
    int legs;
    char *colour;
    char *behaviour;

public:
   // Default Constructor.
    char *name;
    Bird(){
        name = new char[100];
        colour = new char[100];
        behaviour = new char[100];
    }

    //Copy Constructor.
    Bird(Bird &b){
        char *ch = new char[strlen(b.name)+1];
        char *color = new char[strlen(b.colour) + 1];
        char *behave = new char[strlen(b.behaviour) + 1];
        strcpy(ch,b.name);
        strcpy(color,b.colour);
        strcpy(behave,b.behaviour);
        this->name = ch;
        this->colour = color;
        this->behaviour = behave;
        this->legs = b.legs;
    }

    void display(){
        cout<<endl;
        cout<<"[ "<<"Name = "<<this->name<<", ";
        cout<<"Legs = "<<this->legs<<", ";
        cout<<"Colour = "<<this->colour<<", ";
        cout<<"Behaviour = "<<this->behaviour<<" ] ";
        cout<<endl<<endl;    
    }

    void setName(char ch[]){
        strcpy(this->name, ch);
    }

    void setLegs(int leg){
        legs = leg;
    }

    void setColour(char color[]){
        strcpy(this->colour, color);
    }

    void setBehaviour(char behave[]){
        strcpy(this->behaviour, behave);
    }

};

int main(){

    //Shallow Copy
    // Bird parrot;
    // char name[7] = "Parrot";
    // char color[6] = "Green";
    // char behave[6] = "Sweet";
    // parrot.setName(name);
    // parrot.setColour(color);
    // parrot.setBehaviour(behave);
    // parrot.setLegs(2);

    // parrot.display();


    // //use default copy constructor.
    // Bird peacock(parrot);//first way to call.
    // Bird pigeon = peacock;//second way to call;
    // peacock.display();
    // pigeon.display();

    // parrot.name[0] = 'C';
    // parrot.display();

    // peacock.display();


    //Deep copy constructor.
    Bird parrot;
    char name[7] = "Parrot";
    char color[6] = "Green";
    char behave[6] = "Sweet";
    parrot.setName(name);
    parrot.setColour(color);
    parrot.setBehaviour(behave);
    parrot.setLegs(2);

    parrot.display();


    //use uder-defined copy constructor.
    Bird peacock(parrot);//first way to call.
    Bird pigeon = peacock;//second way to call;
    peacock.display();
    pigeon.display();

    parrot.name[0] = 'C';
    parrot.display();

    peacock.display();

    return 0;
}