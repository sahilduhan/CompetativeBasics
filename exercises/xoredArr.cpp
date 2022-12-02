#include<bits/stdc++.h>
using namespace std;

vector<int> decode(vector<int> encoded, int first) {
    vector<int>ans = {first};
    for (auto num : encoded){
        first ^= num;
        ans.push_back(first);
    }
    return ans;
}