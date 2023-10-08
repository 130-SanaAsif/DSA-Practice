#include<iostream>
using namespace std;

class hero{
private:
    int health;
protected:
    int energy;
public:
    char level;

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    int getEnergy(){
        return energy;
    }
    
    void setEnergy(int e){
        energy = e;
    }
};

// class weapon : public hero{
// public:
//     int getEnergy(){
//         return energy;
//     }
//     void setEnergy(int e){
//         energy = e;
//     }
// };

int main(){
    //Static Allocation
    hero gobbo;

    //Dynamic Allocation
    hero *a = new hero;

    // (*a).setEnergy(95);
    // (*a).setHealth(100);
    // (*a).setLevel('A');

    // cout<<"Gobbo health is "<<(*a).getHealth()<<endl;
    // cout<<"Gobbo level is "<<(*a).getLevel()<<endl;
    // cout<<"Gobbo energy is "<<(*a).getEnergy()<<"%"<<endl;


    a->setEnergy(95);
    a->setHealth(100);
    a->setLevel('A');

    cout<<"Gobbo health is "<<a->getHealth()<<endl;
    cout<<"Gobbo level is "<<a->getLevel()<<endl;
    cout<<"Gobbo energy is "<<a->getEnergy()<<"%"<<endl;
    

    // weapon immune;
    gobbo.setHealth(80);
    gobbo.setLevel('A');
    gobbo.setEnergy(75);
    // immune.setEnergy(75);

    cout<<"Gobbo health is "<<gobbo.getHealth()<<endl;
    cout<<"Gobbo level is "<<gobbo.getLevel()<<endl;
    cout<<"Gobbo energy is "<<gobbo.getEnergy()<<"%"<<endl;
    // cout<<"Gobbo energy is "<<immune.getEnergy()<<"%"<<endl;

    return 0;
}