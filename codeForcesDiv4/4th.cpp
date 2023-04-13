#include<bits/stdc++.h>
using namespace std;
int solve(string str){
    int count = 0;
    // if (str == "aazz") return 3;
    map<char, int>mp;
    for (auto it : str) mp[it]++;
    if (mp.size() == 1) return 2;
    for (auto it : mp){
        if (it.second > 1) count += 2;
        else count += 1;
    }
    return count;
}
int main(){
    int tc;
    cin >> tc;
#include<bits/stdc++.h>
    using namespace std;

#define ll long long
#define MOD 1000000007
#define endl "\n"

    void solve(){
        ll n; cin >> n;
        vector<ll>v(n), pre(n, 0);
        ll sm = 0;
        ll totNeg = 0;
        for (ll i = 0; i < n; i++){
            cin >> v[i];
            sm += abs(v[i]);
            if (v[i] < 0) totNeg++;
        }
        for (ll i = 0; i < n; i++) if (v[i] < 0) v[i] = abs(v[i]);
        if (totNeg % 2 == 0){
            cout << sm << endl;
            return;
        }
        ll mn = *min_element(v.begin(), v.end());
        cout << sm - 2 * mn << endl;
    }

    int main(){
        ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
        ll t; cin >> t;
        while (t--){
            solve();
        }
        return 0;
    }

    while (tc--){
        int n;
        cin >> n;
        string str;
        cin >> str;

        cout << solve(str) << endl;
    }

    return 0;
}