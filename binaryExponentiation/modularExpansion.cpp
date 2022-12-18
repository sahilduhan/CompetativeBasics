#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long int

int32_t Pow(int a, int b){
    int res = 1;
    while (b){
        if (b & 1) res *= a, res %= mod;
        a *= a; a %= mod;
        b /= 2;
    }
    return res;
}
int32_t main(){



    return 0;
}