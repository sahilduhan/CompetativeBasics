#include<bits/stdc++.h>
using namespace std;
int solve(int num, int i){
    int maskBit = (1 << i);
    return (num and maskBit) > 0 ? 1 : 0;
}
void setIthBitZero(int& num, int i){
    int mask = (1 << i);
    num |= mask;
}
void clearIthBit(int& num, int i){
    int mask = (1 << i);
    num ^= mask;
}
int main(){
    int num = 5, i = 3;
    // cout << solve(num, i) << endl;
    // setIthBitZero(num, i);
    clearIthBit(num, 2);
    cout << num << endl;
    return 0;
}