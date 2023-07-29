#include<bits/stdc++.h>
using namespace std;

bool isFascinating(int n) {
    string s1 = to_string(n);
    string temp = s1 + to_string(2 * n) + to_string(3 * n);
    if (temp.length() != 9) return false;
    sort(temp.begin(), temp.end());
    for (int i = 0; i < 9; i++) {
        if (temp[i] != '1' + i) return false;
    }
    return true;
}
int main(){
    cout << isFascinating(267) << endl;


    return 0;
}