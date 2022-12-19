#include<bits/stdc++.h>
using namespace std;

bool isSorted(int n, vector<int>& nums){
    if (n == 0 || n == 1) return true;
    if (nums[0] < nums[1] and isSorted(n - 1, nums)) return true;
    return false;
}

bool isSort(int i, vector<int>& nums){
    if (i == nums.size() - 1) return true;
    if (nums[i] < nums[i + 1] and isSort(i + 1, nums)) return true;
    return false;
}
int main(){
    vector<int>nums = {1, 2, 3, 4, 5};
    cout << isSorted(nums.size(), nums) << isSort(0, nums) << endl;
    return 0;
}