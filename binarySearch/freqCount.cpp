#include<bits/stdc++.h>
using namespace std;
int fo(vector<int>& nums, int key){
    int idx = -1;
    int lo = 0, hi = nums.size() - 1;
    while (lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == key){
            hi = mid - 1;
            idx = mid;
        }
        else if (nums[mid] > key) hi = mid - 1;
        else lo = mid + 1;
        return idx;
    }
}
int lo(vector<int>& nums){

}
int freqcount(vector<int>& nums){

}
int main(){


    return 0;
}