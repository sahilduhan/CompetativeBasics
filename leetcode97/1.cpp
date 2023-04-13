#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>finalAns;
        for (int i = 0; i < nums.size(); i++){
            vector<int>temp;
            while (nums[i]){
                temp.push_back(nums[i] % 10);
                nums[i] /= 10;
            }
            for (int j = temp.size() - 1; j >= 0; j--) finalAns.push_back(temp[j]);
            temp.clear();
        }
        return finalAns;
    }
};