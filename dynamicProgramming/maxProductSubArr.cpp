#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> nums) {
    int ans = INT_MIN, prod = 1;
    for (int i = 0;i < nums.size();i++){
        prod *= nums[i];
        ans = max(ans, prod);
        if (prod == 0) prod = 1;
    }

    prod = 1;

    for (int i = nums.size() - 1;i >= 0;i--){
        prod *= nums[i];
        ans = max(ans, prod);
        if (prod == 0) prod = 1;
    }

    return ans;

}

int main(){


    return 0;
}