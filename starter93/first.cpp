#include<bits/stdc++.h>
using namespace std;

string solve(int n){
    string s = to_string(n);
    if (s.size() < 5 || s.size() > 5) return "No";
    else if (s[0] == '0') return "No";
    return "Yes";
}
int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n1, n2;
        cin >> n1 >> n2;
        int n3 = n1 * n2;
        cout << solve(n3) << endl;
    }

    return 0;
}