#include<bits/stdc++.h>
using namespace std;

//Using recursion.
int f(int day, int last, vector<vector<int>>&arr){
    if(day == 0){
        int maxi = 0;
        for(int i=0; i<3; i++){
            if(i != last){
                maxi = max(maxi, arr[0][i]);
            }
        }
        return maxi;
    }

    int maxi = 0;
    for(int i=0; i<3; i++){
        if(i != last){
            int point = arr[day][i] + f(day-1,i,arr);
            maxi = max(maxi,point);
        }
    }
    return maxi;
}
int recur(int n, vector<vector<int>>&arr){
    return f(n-1, 3, arr);
}

//Using Memoization.
int f(int day, int last, vector<vector<int>>&arr, vector<vector<int>>&dp){
    if(day == 0){
        int maxi = 0;
        for(int i=0; i<3; i++){
            if(i != last){
                maxi = max(maxi, arr[0][i]);
            }
        }
        return maxi;
    }

    if(dp[day][last] != -1){
        return dp[day][last];
    }

    int maxi = 0;
    for(int i=0; i<3; i++){
        if(i != last){
            int point = arr[day][i] + f(day-1,i,arr,dp);
            maxi = max(maxi, point);
        }
    }
    return dp[day][last] = maxi;
}
int memo(int n, vector<vector<int>>&arr){
    vector<vector<int>>dp(n, vector<int>(4,-1));
    return f(n-1,3,arr,dp);
}

//Using Tabulation.
int ninjaTraining(int n, vector<vector<int>>&arr){
    vector<vector<int>>dp(n, vector<int>(4,0));

    dp[0][0] = max(arr[0][1], arr[0][2]);
    dp[0][1] = max(arr[0][0], arr[0][2]);
    dp[0][2] = max(arr[0][0], arr[0][1]);
    dp[0][3] = max(arr[0][1], max(arr[0][1], arr[0][2]));

    for(int day = 1; day < n; day++){
        for(int last = 0; last < 4; last++){
            for(int i = 0; i < 3; i++){
                if(i != last){
                    int point = arr[day][i] + dp[day-1][i];
                    dp[day][last] = max(dp[day][last], point);
                }
            }
        }
    }
    return dp[n-1][3];
}

//Using Space Optimization.
int spaceOpti(int n, vector<vector<int>>&arr){
    vector<int>prev(4,0);

    prev[0] = max(arr[0][1], arr[0][2]);
    prev[1] = max(arr[0][0], arr[0][2]);
    prev[2] = max(arr[0][0], arr[0][1]);
    prev[3] = max(arr[0][0], max(arr[0][1], arr[0][2]));

    for(int day = 1; day < n; day++){
        vector<int>temp(4,0);
        for(int last = 0; last < 4; last++){
            for(int i=0; i<3; i++){
                if(i != last){
                    temp[last] = max(temp[last], arr[day][i] + prev[i]);
                }
            }
        }
        prev = temp;
    }
    return prev[3];
}

int main(){
    vector<vector<int>>arr = {{10,40,70},
                            {20 ,50 ,80},
                            {30,60,90}};

    int n = arr.size();

    cout<<"Using Recursion = ";
    int res1 = recur(n,arr);
    cout<<res1<<endl;

    cout<<"Using Memoization = ";
    int res2 = memo(n,arr);
    cout<<res2<<endl;

    cout<<"Using Tabulation = ";
    int res3 = ninjaTraining(n,arr);
    cout<<res3<<endl;

    cout<<"Space Optimization Approach = ";
    int res4 = spaceOpti(n,arr);
    cout<<res4<<endl;

return 0;
}