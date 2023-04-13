#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(int i, int j, int p){
        if (j == 0) return 1;
        if (j == 1) return i;
        long long ans = solve(i, j / 2, p);
        ans = (ans * ans) % p;
        if (j % 2 == 1) ans = (ans * i) % p;
        return ans;
    }
    int countWays(vector<vector<int>>& ranges) {
        sort(ranges.begin(), ranges.end());
        vector<vector<int>> ans;
        for (auto it : ranges){
            if (ans.size() == 0 or ans.back()[1] < it[0]) ans.push_back(it);
            else ans.back()[1] = max(ans.back()[1], it[1]);
        }
        int size = ans.size();
        return solve(2, size, 1e9 + 7);
    }
};