#include<bits/stdc++.h>
using namespace std;

int main(){
    string arr[6][3];

    for(int i=0; i<6; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    // for(int i=0; i<6; i++){
    //     for(int j=0; j<3; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    float t_sales = 0;
    float average = 0;
    int app = 0, ban = 0, org = 0;

    for(int i=0; i<6; i++){
        for(int j=1; j<2; j++){
           t_sales = t_sales + (stof(arr[i][j]) * stof(arr[i][j+1]));
        }
    }
    average = t_sales/6;
    for(int i=0; i<6; i++){
        for(int j=0; j<1; j++){
            if(arr[i][j] == "Apple"){
                app = app + stoi(arr[i][j+2]);
            }
            else if(arr[i][j] == "Banana"){
                ban = ban + stoi(arr[i][j+2]);
            }
            else{
                org = org + stoi(arr[i][j+2]);
            }
        }
    }

    cout<<"Total Sales: "<<t_sales<<endl;
    cout<<"Average Total Sales: "<<average<<endl;
    if(app > ban && app > org){
        cout<<"Best Product Sale: "<<"Apple"<<endl;
    }
    else if(ban > app && ban > org){
        cout<<"Best Product Sale: "<<"Banana"<<endl;
    }
    else{
        cout<<"Best Product Sale: "<<"Orange"<<endl;
    }
return 0;
}