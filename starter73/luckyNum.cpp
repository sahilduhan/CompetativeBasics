#include<bits/stdc++.h>

using namespace std;
#define ll long long 

int main() {
    int tc;
    cin >> tc;
    while (tc--){
        ll int xx, yy;
        cin >> xx;
        cin >> yy;
        if (xx == yy){
            cout << xx << endl;
            continue;
        }
        ll int val = xx * yy - xx - yy;
        if (val < 0) val = 2 * xx * yy - xx - yy;
        cout << val << endl;
    }
    return 0;
}