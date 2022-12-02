#include<bits/stdc++.h>
using namespace std;
void solve(int& num, int i, int j){
    int a = ~0 << j;
    int b = (1 << i) - 1;
    int mask = a | b;
    num &= mask;
}
int main(){
    int num = 15;
    solve(num, 1, 3);
    cout << num << endl;

    return 0;
}