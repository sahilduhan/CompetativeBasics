#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1e9 + 7;
int multiply(int a, int b, int c){
    int res = 0;
    while (b){
        if (b & 1) res += a, res %= mod;
        a = 2 * a;
        a %= mod;
        b /= 2;
    }
    return res;
}
int main(){

    // cout << multiply(2, 10, 1e9 + 7) << endl;

    return 0;
}