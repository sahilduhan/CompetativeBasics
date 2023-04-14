#include<bits/stdc++.h>
using namespace std;

int nkJumps(int n, int k){
    if (n == 0) return 1;
    if (n < 0) return 0;
    int ans = 0;
    for (int i = 1;i < n;i++){
        ans += nkJumps(n - i, k);
    }
    return ans;
}
int main(){




    return 0;
}