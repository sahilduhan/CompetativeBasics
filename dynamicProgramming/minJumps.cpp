#include<bits/stdc++.h>
using namespace std;
int minJumps(int i, vector<int>& arr, vector<int>& dp){
    if (i == arr.size() - 1) return 0;
    if (i >= arr.size()) return INT_MAX;
    if (dp[i] != 0) return 0;

    int steps = INT_MAX, maxJump = arr[i];

    for (int jump = 1;jump <= maxJump;jump++){
        int nextStep = i + jump;
        int subProb = minJumps(nextStep, arr, dp);
        if (subProb != INT_MAX) steps = min(steps, subProb + 1);
    }
    return dp[i] = steps;
}
int main(){



    return 0;
}