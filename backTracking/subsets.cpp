#include<bits/stdc++.h>
using namespace std;
vector<string>a;
void permutation(string s, int i, int j, string temp){
    if (i == s.size()){
        if (temp.size() > 0) a.push_back(temp);
        return;
    }
    permutation(s, i + 1, j + 1, temp);
    temp.push_back(s[i]);
    permutation(s, i + 1, j, temp);
}
int main(){
    string s = "code";
    permutation(s, 0, 0, "");
    // for (auto it : a) cout << it << endl;

    long long ans = 0;
    permutation(s, 0, 0, "");
    for (auto it : a){
        ans += it.size();
    }
    cout << ans << endl;
    return 0;
}