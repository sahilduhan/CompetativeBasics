#include<bits/stdc++.h>
using namespace std;
int uniqueNum(vector<int>& arr){
    int ans = 0;
    for (auto it : arr){
        ans = ans ^ it;
    }
    return ans;
}
int main(){
    vector<int>arr = {1, 2, 2, 1, 3, 4, 5, 4, 5};
    cout << uniqueNum(arr) << endl;
    return 0;
}