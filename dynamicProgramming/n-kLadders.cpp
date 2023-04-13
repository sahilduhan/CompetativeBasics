#include<bits/stdc++.h>
using namespace std;

int solve(int n, int k){
    if (n == 0) return 1;
    if (n < 0) return 0;
    int ans = 0;
    for (int jump = 0;jump < k;jump++) ans += solve(n - jump, k);
    return ans;
}


int solveDp(int n, int k, int* dp){
    if (n == 0) return 1;
    if (n < 0) return 0;

    if (dp[n] != 0) return dp[n];
    int ans = 0;
    for (int jumps = 0;jumps < k;jumps++){
        ans += solveDp(n - jumps, k, dp);
    }
    return dp[n] = ans;
}
int main(){




    return 0;
}