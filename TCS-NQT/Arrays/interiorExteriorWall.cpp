#include<bits/stdc++.h>
using namespace std;

int main(){
    int intWall;
    cin>>intWall;
    
    int extWall;
    cin>>extWall;

    float totalPrice = 0;
    float brr[extWall];
    float arr[intWall];
    float sum1 = 0;
    float sum2 = 0;

    for(int i=0; i<intWall; i++){
        cin>>arr[i];
    }
 
    for(int i=0; i<extWall; i++){
        cin>>brr[i];
    }
   
    for(int i=0; i<intWall; i++){
        sum1 += arr[i];
    }

    for(int i=0;i<extWall; i++){
        sum2 += brr[i];
    }
    
    if(intWall == 0){
        totalPrice = 0 + (sum2*12);
        cout<<"Total estimated Cost : "<<totalPrice;
    }
    else if(extWall == 0){
        totalPrice = (sum1*18) + 0;
        cout<<"Total estimated Cost : "<<totalPrice;
    }
    else{
        totalPrice = (sum1*18) + (sum2*12);
        cout<<"Total estimated Cost : "<<totalPrice<<endl;
    }
return 0;
}