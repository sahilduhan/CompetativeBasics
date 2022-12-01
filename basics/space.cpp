#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr = {1, 2, 3, 1, 12, 143, 12};
    int startTime, endTime;
    startTime = clock();
    sort(arr.begin(), arr.end());
    endTime = clock();
    cout << endTime - startTime;

    return 0;
}