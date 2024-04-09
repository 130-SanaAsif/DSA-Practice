#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3];
    int avg[3] = {0};
    int maxi = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
            if(arr[i][j] < 1 || arr[i][j] > 100){
                arr[i][j] = 0;
            }
        }
    }

    

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            avg[i] += arr[j][i];
        }
        avg[i] = avg[i]/3;
    }
    
   
    for(int i=0; i<3;i++){
        if(avg[i] > maxi){
            maxi = avg[i];
        }
    }

    for(int i=0; i<3; i++){
        if(avg[i] == maxi){
            cout<<"Trainee Number: "<<i+1<<endl;
        }
        else if(avg[i] < 70){
            cout<<"All trainees arr unfit"<<endl;
        }
    }
    
return 0;
}