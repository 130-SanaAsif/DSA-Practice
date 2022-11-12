#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int>s;
    s.insert(5);
    s.insert(10);
    s.insert(6);
    s.insert(6);
    if(s.find(6) == s.end()){
        cout<<"NOT FOUND"<<endl;
    }
    else{
        cout<<"FOUND"<<endl;
    }    
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<(*it)<<" ";
    }
    //cout<<s.size()<<endl;
    s.erase(10);
    cout<<endl;
    for(auto it = s.begin(); it !=s.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    if(s.count(7) == 0){
        cout<<"NOT PRESENT"<<endl;
    }
    else{
        cout<<"PRESENT";
    }
    s.erase(s.begin(), s.end());
    
    return 0;
}
