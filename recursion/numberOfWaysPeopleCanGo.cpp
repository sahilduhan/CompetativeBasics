#include<bits/stdc++.h>
using namespace std;
int count(int num){
    if (num == 0 || num == 1) return num;
    return count(num - 1) + (num - 1) * count(num - 2);
}
int main(){
    cout << count(100) << endl;
    return 0;
}