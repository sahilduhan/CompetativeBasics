#include<bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>& dp){
    if (n == 0) return 0;
    if (dp[n] != -1) return dp[n];
    int ans = INT_MAX;
    for (int i = 0;i <= sqrt(n);i++){
        int currStep = i * i, steps = 1 + solve(n - currStep, dp);
        ans = min(steps, ans);
    }
    return dp[n] = ans;
}
int numSquares(int n) {
    vector<int>dp(n + 1, -1);
    return solve(n, dp);
}

int main(){


    return 0;
}