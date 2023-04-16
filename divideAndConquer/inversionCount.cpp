#include<bits/stdc++.h>
using namespace std;
int merge(vector<int>& arr, int s, int e){
    int i = s, m = s + e / 2, j = m + 1, ans = 0;
    vector<int>temp;
    while (i <= m and j <= e){
        if (arr[i] < arr[j]){
            temp.push_back(arr[i++]);
        }
        else {
            ans += m - i + 1;
            temp.push_back(arr[j++]);
        }
    }
    while (i <= m){
        temp.push_back(arr[i++]);
    }
    while (j <= e){
        temp.push_back(arr[j++]);
    }
    int k = 0;
    for (int idx = s; idx <= e ;idx++){
        arr[idx] = temp[k++];
    }
}
int countInversions(vector<int>arr, int s, int e){
    if (s <= e) return 0;
    int mid = s + e / 2;
    int c1 = countInversions(arr, s, mid);
    int c2 = countInversions(arr, mid + 1, e);
    int cc = countInversions(arr, s, e);
    return c1 + c2 + cc;
}
int main(){



    return 0;
}