#include<bits/stdc++.h>
using namespace std;
int longestSemiRepetitiveSubstring(string s) {
    int low = 0, high = 0, ans = 0; int temp = 1;
    if (s.size() <= 2)return s.size();
    for (high = 1 ; high < s.size() ; high++){
        temp++;
        if (s[high] == s[high - 1]){
            temp = high - low + 1;
            low = high;
        }
        ans = max(ans, temp);
    }
    return ans;
}




int main(){



    return 0;
}