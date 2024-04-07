#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,j,b,p;
    cout<<"Enter number of monkey = ";
    cin>>n;
    cout<<"Number of banana one monkey can eat = ";
    cin>>k;
    cout<<"Number of peanuts one monkey can eat = ";
    cin>>j;
    cout<<"Number of bananas = ";
    cin>>b;
    cout<<"Number of peanuts = ";
    cin>>p;

    while(b != 0 || p != 0){

        if(b >= k ){
            b-=k;
            n=n-1;
            // cout<<"loop 1 = "<<n<<" "<<b<<endl;
        }

        if(n == 1){
            if(b < k || p < j){
                b-=k;
                p-=j;
                n=n-1;
                break;
            }
        }
        
        if(p >= j){
            p-=j;
            n=n-1;
            // cout<<"loop 2 = "<<n<<" "<<p<<endl; 
        }
    }

    cout<<"Number of monkey left on the tree = "<<n<<endl;
return 0;
}