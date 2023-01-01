#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int A[n], B[n];
        for (int i = 0;i < n;i++) cin >> A[i];
        for (int i = 0; i < n; i++) cin >> B[i];
        int temp, ans;
        temp = ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (A[i] != 0 && B[i] != 0)
            {
                temp++;
            }
            else
            {
                ans = max(ans, temp);
                temp = 0;
            }
        }
        ans = max(ans, temp);
        cout << ans << endl;
    }
    return 0;
}




#include <bits/stdc++.h>
using namespace std;


int main() {
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--){
        int size;
        cin >> size;
        vector<int>a, b;
        for (int i = 0;i < size;i++){
            int num;
            cin >> num;
            a.push_back(num);
        }
        for (int i = 0;i < size;i++){
            int num;
            cin >> num;
            b.push_back(num);
        }
        int count = 0, ans = INT_MIN;
        for (int i = 0;i < a.size();i++){
            if (a[i] != 0 and b[i] != 0) count++;
            else {
                ans = max(ans, count);
                count = 0;
            }
            ans = max(ans, count);
        }
        cout << ans << endl;
    }
    return 0;
}
