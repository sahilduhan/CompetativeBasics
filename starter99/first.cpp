#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--){
        int n, x, k, p;
        cin >> n >> x >> k >> p;
        int ans = 0;
        if (k == 0) cout << p << "\n";
        else{
            for (int i = 0;i < x;i++) p += 10;
            for (int i = 0;i < k - x;i++) p += 5;
            if (k < x) p -= (x - k) * 10;
            if (k == n){ p += 20; }
            cout << p << "\n";
        }
    }
    return 0;
}