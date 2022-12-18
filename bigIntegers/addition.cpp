#include<bits/stdc++.h>
using namespace std;

int charToDigit(char ch){
    return ch - '0';
}
char intToChar(char ch){
    return ch + '0';
}
string solve(string n1, string n2){
    if (n1 > n2) swap(n1, n2);
    string ans = "";
    reverse(n1.begin(), n1.end());
    reverse(n2.begin(), n2.end());
    int carry = 0;
    for (int i = 0;i < n1.size();i++){
        int digit1 = charToDigit(n1[i]);
        int digit2 = charToDigit(n2[i]);
        int sum = digit1 + digit2 + carry;
        int digit = sum % 10;
        carry = sum / 10;
        ans.push_back(intToChar(digit));
    }

    for (int i = n1.size();i < n2.size();i++){
        int digit2 = charToDigit(n2[i]);
        int sum = digit2 + carry;
        int digit = sum % 10;
        carry /= 10;
        ans.push_back(intToChar(digit));
    }
    if (carry) ans.push_back('1');
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    string a, b;
    cin >> a >> b;

    cout << solve(a, b);

    return 0;
}