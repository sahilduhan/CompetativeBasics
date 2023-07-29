#include<bits/stdc++.h>
using namespace std;
// class Solution {
// public:
vector<int> maximumSumQueries(vector<int>& nums1, vector<int>& nums2, vector<vector<int>>& queries) {
    priority_queue<pair<pair<int, int>, int>, vector<pair<pair<int, int>, int>>, greater<pair<pair<int, int>, int>> > pq;
    for (int i = 0;i < nums1.size();i++) pq.push({{nums1[i], nums2[i]}, nums1[i] + nums2[i]});
    vector<int>ans;
    for (int i = 0;i < queries.size();i++){
        int x1 = queries[i][0];
        int x2 = queries[i][1];
        while (!pq.empty()){
            int ii = pq.top().first.first;
            int jj = pq.top().first.second;
            int sum = pq.top().second;
            if (ii < x1 and jj > x2) pq.pop();
            else ans.push_back(sum);
        }
    }
    return ans;
}
// };/

int main(){
    // nums1 = [4,3,1,2], nums2 = [2,4,9,5], queries = [[4,1],[1,3],[2,5]]
    vector<int>nums1 = {4, 3, 1, 2}, nums2 = {2, 4, 9, 5}, ans;
    vector<vector<int>>querie = {{4, 1}, {1, 3}, {2, 5}};
    ans = maximumSumQueries(nums1, nums2, querie);
    for (auto it : ans) cout << it << " ";

}