#include<bits/stdc++.h>
using namespace std;
int solve(string str){
    if ((str[0] == '1' and str[str.size() - 1] == '1') || (str[0] == '0' and str[str.size() - 1] == '0')) return str.size();

    int left = 0, right = str.size() - 1;
    while (left < right){
        if ((str[left] == '1' and str[right] == '0') || (str[left] == '0' and str[right] == '1')){
            left++;
            right--;
        }
        if (str[left] == str[right]) return right - left + 1;
    }
    return 0;
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