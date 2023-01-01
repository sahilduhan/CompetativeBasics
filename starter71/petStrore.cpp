#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int>a;
        map<int, int>mp;
        for (int i = 0;i < n;i++){
            int num;
            cin >> num;
            a.push_back(num);
        }
        for (auto it : a) mp[it]++;
        int flag = 0;
        for (auto it : mp){
            if (it.second % 2 == 1){
                flag = 1;
                cout << "No";
                break;
            }
        }
        if (flag == 0) cout << "yes";
        cout << endl;
    }

    return 0;
}