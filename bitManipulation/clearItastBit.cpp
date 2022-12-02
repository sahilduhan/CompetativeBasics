#include<bits/stdc++.h>
using namespace std;
void clearLastIthBits(int& num, int i){
    int mask = ~0 << i;
    // mask << i;
    num &= mask;
}
int main(){

    int num = 13;
    clearLastIthBits(num, 3);
    cout << num << endl;
    return 0;
}