#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
void merge(vector<int>arr, int s, int e){
    int i = s, mid = s + e / 2, j = e;
    vector<int>temp;
    while (i < mid and j < e){
        if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }
    while (i < mid) temp.push_back(arr[i++]);
    while (j < e) temp.push_back(arr[j++]);

    // vector<int>ans;
    int k = 0;
    for (int idx = s;idx <= e;idx++) ans[k++] = temp[idx];
}
void mergeSort(vector<int>arr, int s, int e){
    if (s >= e) return;

    int mid = s + e / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);

}
int main(){
    vector<int>arr = {1, 415, 135, 15616, 135616, 165};

    mergeSort(arr, 0, arr.size() - 1);

    for (auto it : ans) cout << it << " ";

    return 0;
}