#include<bits/stdc++.h>
using namespace std;

#define int long long int

void solve()
{
    int size;
    cin >> size;
    vector < int > a(size);
    for (int i = 0;i < size;i++) cin >> a[i];
    map < int, int > mp;
    for (int i = 0;i < size;i++) mp[a[i]]++;
    for (int i = 0;i < size;i++)
    {
        if (mp[a[i]] % a[i] != 0)
        {
            cout << -1 << endl;
            return;
        }
    }

    vector < int > ans;

    map < int, int > frequency, f;

    ans.push_back(1);
    frequency[a[0]] = 1;
    int val = 2;
    f[a[0]]++;
    for (int i = 1;i < size; i++){
        if (frequency.find(a[i]) == frequency.end()) {
            ans.push_back(val);
            frequency[a[i]] = val;
            f[a[i]]++;
            val++;
        }
        else if (f[a[i]] % a[i] != 0) {
            ans.push_back(frequency[a[i]]);
            f[a[i]]++;
        }
        else {
            frequency[a[i]] = val;
            ans.push_back(val);
            val++;
            f[a[i]]++;
        }
    }
    for (auto pr : ans) cout << pr << " ";
    cout << endl;
}

int main() {

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}