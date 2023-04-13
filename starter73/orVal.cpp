#include <bits/stdc++.h>
using namespace std;


void solve(){
    int tc;
    cin >> tc;
    while (tc--){
        int n, y;
        cin >> n >> y;
        int arr[n];
        for (int i = 0;i < n;i++) cin >> arr[i];
        int orVal = arr[0];
        for (int i = 1;i < n;++i) orVal = (orVal | arr[i]);
        int tempAns = (y ^ orVal);
        if ((tempAns | orVal) == y) cout << tempAns << endl;
        else cout << -1 << endl;

    }
}
int main() {
    // your code goes here
    solve();
    return 0;
}
