#include<bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--){
        int n, x, ans = 0;
        cin >> n >> x;
        vector<int>a(n), b(n);
        for (int i = 0;i < n;i++){
            int num;
            cin >> num;
            a.push_back(num);
        }
        for (int i = 0;i < n;i++){
            int num;
            cin >> num;
            b.push_back(num);
        }
        for (int i = 0;i < n;i++){
            if (a[i] >= x) ans += b[i];
        }
        cout << ans << endl;
    }
    return 0;
}


