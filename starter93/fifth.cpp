#include <bits/stdc++.h>
using namespace std;
int solve(long long aa, long long bb, long long m){
    aa %= m;
    long long res = 1;
    while (bb > 0){
        if (bb & 1) res = res * aa % m;
        aa = aa * aa % m;
        bb >>= 1;
    }
    return res;
}
void sol(){
    long long size, count = 0;
    cin >> size;
    long long nums[size];
    for (int i = 0; i < size; i++) cin >> nums[i];
    for (int i = 0; i < size; i++){
        for (int j = i; j < size; j++){
            int res = nums[i] ^ nums[j];
            string str = to_string(res);
            unordered_set<char> st;
            for (auto it : str) st.insert(it);
            if (st.size() == 1) count++;
            st.clear();
        }
    }
    cout << count << endl;
}
int main(){
    int t;
    cin >> t;
    while (t--) sol();
    return 0;
}