
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin >> n;
    vector<int>temp(n), prefix(n, 0);
    int sum = 0, totalNegativeVal = 0;
    for (int i = 0; i < n; i++){
        cin >> temp[i];
        sum += abs(temp[i]);
        if (temp[i] < 0) totalNegativeVal++;
    }
    for (int i = 0; i < n; i++) if (temp[i] < 0) temp[i] = abs(temp[i]);
    if (totalNegativeVal % 2 == 0){
        cout << sum << endl;
        return;
    }
    int mn = *min_element(temp.begin(), temp.end());
    cout << sum - 2 * mn << endl;
}

int main(){
    int tc; cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}
