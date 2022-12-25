#include<bits/stdc++.h>
using namespace std;

string solve(string s){
    map<char, int>mp;
    for (auto it : s){
        mp[it]++;
    }
    for (auto it : mp){
        if (it.first == '<' and it.second > 1) return "Error";
        if (it.first == '>' and it.second > 1) return "Error";
        if (it.first == '/' and it.second > 1) return "Error";
    }
    return "Success";
}
int main() {
    int tc;
    cin >> tc;
    while (tc--){
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    // your code goes here
    return 0;
}
