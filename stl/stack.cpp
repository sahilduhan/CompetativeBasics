#include<bits/stdc++.h>
using namespace std;
int main(){
    // stack<int>st = {1, 1, 212, 12, 124, 14, 14, 122, 35};
    array<int, 10> arr;
    for (int i = 0; i < 10; i++) cin >> arr[i];
    for (auto it : arr) cout << it << "  ";
    stack<int>st;
    for (auto it : arr) st.push(it);
    while (st.size()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}