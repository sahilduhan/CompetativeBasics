#include<bits/stdc++.h>
using namespace std;
void printBrackets(string ans, int index, int n, int open, int close){
    if (index == 2 * n){
        cout << ans << endl;
        return;
    }
    if (open < n) printBrackets(ans += '(', index + 1, n, open + 1, close);
    if (close < open) printBrackets(ans += ')', index + 1, n, open, close + 1);
}
int main(){
    printBrackets("", 0, 3, 0, 0);

    return 0;
}