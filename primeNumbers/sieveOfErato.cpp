#include<bits/stdc++.h>
using namespace std;
#define N 1000000
#define ll long long
void solve(vector<int>& sieve){
    sieve[0] = sieve[1] = 0;

    for (ll i = 2;i <= N; i++){
        if (sieve[i] == 1){
            for (ll j = i * i ; j <= N; j += i) sieve[j] = 0;
        }
    }
}
int main(){


    return 0;
}