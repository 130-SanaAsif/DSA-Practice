#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, price, profit;
    cout<<"Number of people -> ";
    cin>>n;

    cout<<"Price Earned -> ";
    cin>>price;

    cout<<"Profit -> ";
    cin>>profit;

    int ans = 0;

    while(n > 1){
        price = price * profit /100;
        //cout<<"Answer = "<<ans<<endl;
        //price = price - ans;

        //cout<<"Price = "<<price<<endl;
        n--;
    }

    cout<<"Head earned Rs. "<<price<<endl;
return 0;
}