#include<bits/stdc++.h>
using namespace std;
int longestIncSubSeq(vector<int>& arr){
    vector<int>dp(arr.size(), 0);
    int ans = 1, size = arr.size();

    for (int i = 1;i <= size;i++){
        for (int j = 0;j < i;j++){
            if (arr[i] > arr[j]){
                dp[i] = max(dp[i], dp[j] + 1);
                ans = max(ans, dp[i] + 1);
            }
        }
    }
    return ans;

}
int main(){


    return 0;
}