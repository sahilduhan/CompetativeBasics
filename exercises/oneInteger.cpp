#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> nums) {
    priority_queue<int, vector<int>, greater<int>>pq;
    for (auto it : nums){
        pq.push(it);
    }
    int sum = 0;
    while (!pq.size() > 1){
        int tempSum = 0;
        int fTop = pq.top();
        pq.pop();
        int sTop = pq.top();
        pq.pop();
        tempSum = sTop + fTop;
        pq.push(tempSum);
    }
    return pq.top();
}

int main(){
    vector<int>nums = {1, 2, 3, 4, 5};
    cout << solve(nums);
    return 0;
}