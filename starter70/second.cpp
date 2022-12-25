#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int tc;
    while (tc--){
        int n;
        cin >> n;
        if (n < 4) cout << "MILD" << endl;
        else if (n < 7 and n >= 4) cout << "MEDIUM" << endl;
        else cout << "HOT" << endl;
    }
    return 0;
}
