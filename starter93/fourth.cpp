#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main() {
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        vector<long long>nums(n);
        for (int i = 0;i < n;i++) cin >> nums[i];
        long long count = 0;
        for (int i = 0;i < n;i++){
            if (nums[i] % 2 == 0) count++;
        }
        int b = 0;
        if (count == n) b = pow(2, count) - 1;
        else b = pow(2, count);
        cout << b % MOD << endl;
    }
    return 0;
}