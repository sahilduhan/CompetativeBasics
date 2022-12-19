#include<bits/stdc++.h>
using namespace std;
// #define int long long int

int solve(int n){
    if (n == 0 || n == 1) return 1;
    return n * solve(n - 1);
}
int main(){
    cout << solve(10) << endl;
    return 0;
}