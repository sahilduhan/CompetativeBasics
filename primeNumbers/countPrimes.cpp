#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n){
    if (n == 0 || n == 1) return 0;
    vector<int>sieve(n, 0);
    for (int i = 2;i * i < n;i++){
        if (sieve[i] == 0){
            for (int j = i * i;j < n;j += i){
                sieve[j] = 1;
            }
        }
    }
    int count = 0;
    for (int i = 2;i < n;i++){
        if (sieve[i] == 0) count++;
    }
    return count;

}
int main(){



    return 0;
}