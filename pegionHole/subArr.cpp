#include<bits/stdc++.h>
using namespace std;
int subArr(vector<int>& nums){
    map<int, int>mp;
    for (int i = 1;i < nums.size();i++){
        nums[i] = nums[i] + nums[i - 1];
        if (nums[i] == 0) return i;
    }
    for (auto it : nums) mp[it]++;
    for (int i = 0;i < nums.size();i++){
        if (mp[nums[i]] > 1) return i;
    }
    return -1;
}
int main(){


    return 0;
}