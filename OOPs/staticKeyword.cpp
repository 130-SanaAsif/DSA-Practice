#include<bits/stdc++.h>
using namespace std;

class hero{
private:
    int health;
protected:
    int energy;
public:
    char level;
    static int timeToComplete;

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
    static int func(){
        return timeToComplete;
    }
};

int hero :: timeToComplete = 5;

int main(){
    cout<<hero::timeToComplete<<endl;
    cout<<hero::func()<<endl;
return 0;
}