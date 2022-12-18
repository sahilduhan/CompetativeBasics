#include<bits/stdc++.h>
using namespace std;
vector<int>uniqueNum(vector<int>& nums){
    int xorVal = 0;
    for (auto it : nums) xorVal = xorVal ^ it;

    int pos = 0, temp = xorVal;
    while ((temp & 1) == 0){
        pos++;
        temp = temp >> 1;
    }
    int setA = 0, setB = 0, mask = 1 << pos;
    for (auto it : nums){
        if (mask ^ it > 0) setA = setA ^ it;
        else setB = setB ^ it;
    }
    return {setA, setB};
}
int main(){



    return 0;
}