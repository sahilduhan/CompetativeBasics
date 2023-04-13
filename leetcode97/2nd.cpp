#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        map<int, int>freq;
        for (auto x : banned) freq[x]++;
        int tempSum = 0, ans = 0;
        for (int i = 1; i <= n; i++){
            if ((freq.find(i) == freq.end()) and ((tempSum + i) <= maxSum)){
                ans++;
                tempSum += i;
            }
        }
        return ans;
    }
};