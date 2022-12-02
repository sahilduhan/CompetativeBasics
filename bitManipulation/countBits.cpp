#include<bits/stdc++.h>
using namespace std;
int countBit(int num){
    int count = 0;
    while (num > 0){
        int last_bit = (num & 1);
        count += last_bit;
        num = num >> 1;
    }
    return count;
}
int main(){
    int num = 15;
    cout << countBit(num) << endl;
    return 0;
}