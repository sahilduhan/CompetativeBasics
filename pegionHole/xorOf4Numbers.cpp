#include <bits/stdc++.h>
using namespace std;
string solve(vector<int>& nums){
    int xorVal = 0;
    unordered_map<int, int>mp;
    for (int i = 1;i < nums.size();i++){
        nums[i] = nums[i] ^ nums[i - 1];
        if (mp.find(nums[i]) != mp.end()) return "Yes";
        if (nums[i] == 0) return "Yes";
    }
    return "No";

}
int main() {
    int n;
    cin >> n;
    if (n > 130) cout << "Yes" << endl;
    vector<int>nums;
    while (n--){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    cout << solve(nums) << endl;
    // your code goes here

    return 0;
}
