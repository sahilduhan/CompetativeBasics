#include <bits/stdc++.h>
using namespace std;
void find_winner() {
    int n, a, b, alice = 0, bob = 0, common = 0;
    cin >> n >> a >> b;
    int arr[n];
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
        if (arr[i] % a == 0) alice++;
        if (arr[i] % b == 0) bob++;
        if (arr[i] % a == 0 && arr[i] % b == 0) common++;
    }
    if (common) alice++;
    if (alice > bob) cout << "BOB" << '\n';
    else cout << "ALICE" << '\n';

}

signed main() {
    int t = 1;
    cin >> t;
    while (t--) find_winner();
    return 0;
}