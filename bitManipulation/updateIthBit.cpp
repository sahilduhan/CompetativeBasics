#include<bits/stdc++.h>
using namespace std;
void clearBit(int& num, int i){
    int mask = 1 << i;
    num ^= mask;
}
void updateIthBit(int& num, int i, int val){
    clearBit(num, i);
    int mask = 1 << i;
    num |= mask;
}
int main(){
    int num = 13;
    updateIthBit(num, 1, 1);
    cout << num << endl;
    return 0;
}