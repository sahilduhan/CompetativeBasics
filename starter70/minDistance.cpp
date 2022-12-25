#include<bits/stdc++.h> 
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0;i <= n;i++){
        if (s[i] == '1') v.push_back(i);
    }
    int m = v.size();
    bool even = false;
    bool odd = false;
    for (int i = 0;i < m;i++){
        if (v[i] % 2 == 0) even = true;
        else odd = true;
    }
    if (odd == true && even == true)cout << 1 << endl;
    else cout << 2 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        solve();
    }


}