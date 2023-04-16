#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& arr, int s, int e){
    int pivot = arr[e], i = s - 1;
    for (int idx = s;idx < e;idx++){
        if (arr[idx] <= pivot){
            i++;
            swap(arr[i], arr[idx]);
        }
    }
    swap(arr[i + 1], arr[e]);
}

int quickSelect(vector<int>& arr, int s, int e, int k){
    int p = partition(arr, s, e);

    if (k == p) return arr[p];
    else if (p > k) return quickSelect(arr, p + 1, e, k);
    return quickSelect(arr, s, p - 1, k);
}
int main(){



    return  0;
}