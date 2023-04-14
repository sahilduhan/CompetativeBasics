#include<bits/stdc++.h>
using namespace std;
vector<bool>arr(1000000, true);
int count(int a, int b){
    for (int i = a;i <= b;i++){
        for (int j = a * a;j < b;j += a){
            arr[i] = false;
        }
    }
    int ans = 0;
    for (int i = a;i <= b;i++){
        if (arr[i]) ans++;
    }
    return ans;
}
int main(){

    int a = 1, b = 10;
    cout << count(a, b) << endl;

    return 0;
}