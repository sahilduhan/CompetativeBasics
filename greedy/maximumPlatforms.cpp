#include<bits/stdc++.h>
using namespace std;
int findPlatform(int arr [], int dep [], int n){
    sort(arr, arr + n);
    sort(dep, dep + n);
    int i = 1, j = 0, ans = 1, platform = 1;
    while (i < n and j < n){
        if (arr[i] <= dep[j]){
            platform++;
            i++;
        }
        else {
            platform--;
            j++;
        }
        ans = max(ans, platform);
    }
    return ans;
}
int main(){



    return 0;
}