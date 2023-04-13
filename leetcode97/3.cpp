#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximizeWin(vector<int>& prizePositions, int k) {
        int n = prizePositions.size();
        vector<int>dp(n + 1, 0);
        for (int i = 0;i <= prizePositions.size();i++){
            if (i > k) dp[i] = dp[i - k] + 1;
            else dp[i] = i + 1;
            if (i + k < n) dp[i] = max(dp[i], dp[i + k - 1] + 1);
        }
        return min(dp[n - 1], n % (k * 2));
    }
};