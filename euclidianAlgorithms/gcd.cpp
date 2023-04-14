#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    // asuming that b > a
    if (b == 0) return 0;
    return gcd(b, a % b);
}
int main(){



    return 0;
}