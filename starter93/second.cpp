#include <bits/stdc++.h>

using namespace std;

string solve(int a, int b) {
    if (a == b) return "YES";
    int diff = abs(a - b);
    if (diff % 2 == 0 || diff % 4 == 0) return "YES";
    return "NO";
}
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }
    return 0;
}