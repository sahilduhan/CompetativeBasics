#include <bits/stdc++.h>
using namespace std;

void sol(){
    int n, x, count = 0;
    cin >> n;
    map<int, int>mp;
    for (int i = 0;i < n;i++){
        cin >> x;
        mp[x]++;
    }
    if (n <= 2){
        cout << "0" << endl;
        return;
    }
    for (auto it : mp) count = max(count, it.second);
    if (count > 1)cout << n - count << endl;
    else cout << n - 2 << endl;
}

int main() {
    int t;cin >> t;
    while (t--){
        sol();
    }
    return 0;
}
