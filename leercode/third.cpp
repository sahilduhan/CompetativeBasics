#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mod = (1e9 + 7);
    int sumDistance(vector<int>& nums, string s, int d) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L') nums[i] -= d;
            else if (s[i] == 'R') nums[i] += d;
        }
        sort(nums.begin(), nums.end());
        long long temp = 0, sumOfDistances = 0;
        for (int i = 0; i < nums.size(); i++) {
            sumOfDistances += 1LL * nums[i] * i - temp;
            sumOfDistances %= mod;
            temp += nums[i];
            temp %= mod;
        }
        return sumOfDistances % (int)(1e9 + 7);
    }
};
int main(){
    return 0;
}