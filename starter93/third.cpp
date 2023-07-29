#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int sz;
        cin >> sz;
        vector<int> k(sz);
        for (int it = 0; it < sz; ++it) cin >> k[it];
        int n = 0;
        for (auto it : k) {
            if (it % 2 == 0) n += 1;
        }
        int ans;
        if (n == sz) ans = (pow(2, n)) - 1 % MOD;
        else ans = pow(2, n);
        cout << ans % MOD << endl;
    }
    return 0;
}