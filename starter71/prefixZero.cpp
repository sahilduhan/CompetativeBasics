#include<bits/stdc++.h>
using namespace std;
int solve(string str, int k){
    int ans = INT_MAX, count = 0, n = str.size();
    vector<int>a(n);
    for (int i = 1; i < n; i++){
        if (str[i - 1] != str[i]){
            count++;
            a[i] = count;
        }
        else a[i] = count;
    }
    a[0] = 0;
    for (int i = n - 1; i >= 0; i--){
        if ((i - (k - 1)) < 0) break;
        int check = a[i] - a[i - k + 1];
        if (str[i] == '0') check++;
        ans = min(ans, check);
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k, ans = INT_MAX;
        cin >> n >> k;
        string str;
        cin >> str;
        cout << solve(str, k) << endl;
    }
}