#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& arr, int s, int e){
    int pivot = arr[e];
    int i = s - 1;
    for (int idx = s;idx < e;idx++){
        if (arr[idx] <= pivot){
            i++;
            swap(arr[i], arr[idx]);
        }
    }
    swap(arr[i + 1], arr[e]);
    return i + 1;
}

void quickSort(vector<int>& arr, int s, int e){
    if (s >= e) return;
    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main(){



    return 0;
}