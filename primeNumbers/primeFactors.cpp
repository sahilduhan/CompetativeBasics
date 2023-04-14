#include<bits/stdc++.h>
using namespace std;
// void solve(int n){
//     for (int i = 2;i <= n;i++){
//         if (n % i == 0){
//             int count = 0;
//             while (n % i == 0){
//                 count++;
//                 n /= 10;
//             }
//             cout << (i, count) << endl;
//         }
//     }
// }

// // optimised(O(sqrt(n)));

// void solve(int n){
//     // iterate the loop till root of n, i.e. i*i
//     for (int i = 2; i * i <= n;i++){
//         if (n % i == 0){
//             int count = 0;
//             while (n % i == 0){
//                 count++;
//                 n /= 10;
//             }
//             cout << i << count << endl;
//         }
//     }
//     if (n != 1) cout << n << 1 << endl;
// }

// even more optimised by using prime sieve O(Log(n))


void solve(int n){
    vector<int>sieve(n, 0);
    sieve[0] = sieve[1] = 0;
    for (int i = 2;i <= n;i++){
        if (sieve[i] == 0){
            for (int j = i * i;j <= n;j += i){
                sieve[j] = i;
            }
        }
    }
    unordered_map<int, int>mp;
    while (n){
        int val = 0;
        if (sieve[n] != 0){
            mp[sieve[n]]++;
        }
        n /= 10;
    }
    for (auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
}
int main(){
    solve(10);


    return 0;
}