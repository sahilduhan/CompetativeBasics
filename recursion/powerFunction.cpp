#include<bits/stdc++.h>
using namespace std;
int power(int a, int n){
    if (n == 1) return a;
    return a * power(a, n - 1);
}

int powerImproved(int a, int n){
    if (n == 1) return a;
    int ans = powerImproved(a, n / 2);
    int sq = ans * ans;
    if (n & 1) return a * sq;
    return sq;
}
int main(){
    cout << power(2, 3) << endl;
    cout << powerImproved(2, 5) << endl;
    return 0;
}