#include <bits/stdc++.h>
using namespace std;
int solution(string a, string b){
    int m = a.size(), n = a.size();
    vector<vector<int>>dp(m + 1, vector<int>(n + 1, 0));
    for (int j = 1;j <= a.size();j++)
    {
        for (int i = 1;i <= a.size();i++){
            if (b[j - 1] == a[i - 1]) dp[j][i] = 1 + dp[j - 1][i - 1];
            else dp[j][i] = max(dp[j - 1][i], dp[j][i - 1]);
        }
    }
    return dp[m][n] / 2;
    // cout << s << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        string a;
        cin >> a;
        string b = a;
        reverse(a.begin(), a.end());
        cout << solution(a, b) << endl;
    }
    return 0;
}