#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, temp = 0, cnt = 0;
        cin >> n;
        vector<int> arr(n, 0);
        for (int i = 0;i < n;i++){
            int num;
            cin >> num;
            arr[i] = num;
        }
        for (int i = 1;i < n;i++){
            arr[i] = arr[i] ^ arr[i - 1];
            arr[i - 1] = 0;
        }
        temp = n;
        for (int i = 0;i < n;i++){
            if (arr[i] > 0 || arr[i] < 0) temp--;
        }
        if (temp == n){
            cout << "YES" << endl;
            cnt = 1;
        }
        if (temp == (n - 1)){
            if (((n - 1) % 2) == 1){
                cout << "NO" << endl;
                cnt = 1;
            }
            else{
                if (cnt == 0){
                    cout << "YES" << endl;
                    cnt = 1;
                }
            }
        }
        if (cnt == 0) cout << "NO" << endl;
    }

    return 0;
}