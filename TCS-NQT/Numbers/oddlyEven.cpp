#include<bits/stdc++.h>
using namespace std;

// int main(){
//     long long n;
//     cin>>n;

//     long long sumOdd = 0;
//     long long sumEven = 0;

//     while(n){
//         long long num = n%10;
//         if(num%2 == 0){
//             sumEven += num;
//         }
//         else{
//             sumOdd += num;
//         }
//         n = n/10;
//     }

//     long long res = abs(sumOdd - sumEven);
//     cout<<sumOdd<< " "<<sumEven<<endl;
//     cout<<"The difference between odd and even number is = "<<res<<endl;
// return 0;
// }

int main(){
    string num;
    cin>>num;

    long long odd = 0, even = 0;
    int n = num.size();

    for(int i=0; i<n; i++){
        if(i%2 == 0){
            even += num[i]-48;
        }
        else{
            odd += num[i]-48;
        }
    }

    cout<<odd<<" "<<even<<endl;
    cout<<odd-even<<endl;
    return 0;
}