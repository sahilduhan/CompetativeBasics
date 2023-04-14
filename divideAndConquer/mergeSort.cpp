#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int s, int e){
    int i = s, m = s + e / 2, j = m + 1, k = 0;
    vector<int>temp;
    while (i <= m and j <= e){
        if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }

    while (i <= m) temp.push_back(arr[i++]);
    while (j <= e) temp.push_back(arr[j++]);
    for (int idx = s;idx <= e;idx++){
        arr[idx] = temp[k++];
    }
    return;
}
void mergeSort(vector<int>& arr, int s, int e){
    // smallest array possible is when the s >= e, i.e the base case for the algorithm
    if (s >= e) return;
    int mid = s + e / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    return merge(arr, s, e);
}
int main(){



    return 0;
}