#include<bits/stdc++.h>
using namespace std;

struct petrolPump{
    int petrol;
    int distance;
};

int circularTour(petrolPump p[], int n){
    int deficeit = 0;
    int balance = 0;
    int start = 0;

    for(int i=0; i<n; i++){
        balance += p[i].petrol - p[i].distance;
        if(balance < 0){
            deficeit = balance;
            start = i+1;
            balance = 0;
        }
    }

    if(deficeit + balance >= 0){
        return start;
    }
    else{
        return -1;
    }
}

int main(){
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;
    cout<<endl;
    petrolPump arr[n];
    cout<<"Enter the element of array : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i].petrol>>arr[i].distance;
    }

    int res = circularTour(arr,n);
    cout<<"The position where circle is completed = "<<res;
    
return 0;
}