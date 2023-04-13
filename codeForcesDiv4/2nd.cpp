#include<bits/stdc++.h>
using namespace std;
string solve(string str){
    int x = 0, y = 0;
    for (int i = 0;i < str.size();i++){
        if (str[i] == 'L') x--;
        if (str[i] == 'R') x++;
        if (str[i] == 'U') y++;
        if (str[i] == 'D') y--;
        if (x == 1 and y == 1) return "YES";
    }
    return "NO";
}
int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        string str;
        cin >> str;

        cout << solve(str) << endl;
    }

    return 0;
}