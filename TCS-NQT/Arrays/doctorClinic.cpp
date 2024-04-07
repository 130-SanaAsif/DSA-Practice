#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n > 20){
        cout<<"Invalid Input"<<endl;
        return 0;
    }
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i] == 0 || arr[i] > 120){
            cout<<"Invalid Input"<<endl;
            break;
        }
    }
    int paisa = 0;
    for(int i=0; i<n; i++){
    
        if(arr[i] < 17){
            paisa += 200;
        }
        else if(arr[i] >= 17 && arr[i] <= 40){
            paisa += 400;
        }
        else if(arr[i] > 40){
            paisa += 300;
        }
    }

    cout<<"Total income of one day = "<<paisa<<endl;
return 0;
}

// int main(){
//     int age;
//     int fees = 0;
//     int count = 0;

//     while(cin>>age){
//         if(age <= 0 && age > 120){
//             cout<<"Inalid Input"<<endl;
//             break;
//         }

//         count++;
//         if(age < 17){
//             fees += 200;
//         }
//         else if(age >= 17 && age <= 40){
//             fees += 400;
//         }
//         else if(age > 40){
//             fees += 300;
//         }
//     }

//     if(count >= 20){
//         cout<<"Invalid Input"<<endl;
//     }
//     else{
//         cout<<"Total income of one day = "<<fees<<endl;
//     }
//     return 0;
// }