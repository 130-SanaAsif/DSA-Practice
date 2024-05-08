#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    vector<string>veg;
    vector<float>price;
    vector<int>unit;

    while(cin>>s){
        int n;
        float p;
        cin>>p>>n;
        veg.push_back(s);
        price.push_back(p);
        unit.push_back(n);
    }

    
    float t_sales = 0;
    float average = 0;
    int app = 0, ban = 0, org = 0;

    for(int i=0; i<6; i++){
        
        t_sales = t_sales + (price[i] * unit[i]);
        
    }
    average = t_sales/6;
    
    for(int i=0; i<6; i++){
        if(veg[i] == "Apple" or veg[i] == "apple"){
            app = app + unit[i];
        }
        else if(veg[i] == "Banana" or veg[i] == "banana"){
            ban = ban + unit[i];
        }
        else{
            org = org + unit[i];
        }
    }
    
    // cout<<"Total Sales: "<<setprecision(4)<<t_sales<<endl;
    // cout<<"Average Total Sales: "<<setprecision(4)<<average<<endl;

    // if(app > ban && app > org){
    //     cout<<"Best Product Sale: "<<"Apple"<<endl;
    // }
    // else if(ban > app && ban > org){
    //     cout<<"Best Product Sale: "<<"Banana"<<endl;
    // }
    // else{
    //     cout<<"Best Product Sale: "<<"Orange"<<endl;
    // }

    
return 0;
}