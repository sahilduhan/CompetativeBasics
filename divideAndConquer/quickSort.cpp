#include<bits/stdc++.h>
using namespace std;

int partition(int arr [], int low, int high){
    int pivot = arr[high], i = low - 1;
    for (int idx = low; idx <= high - 1;idx++){
        if (arr[idx] <= pivot){
            i++;
            swap(arr[i], arr[idx]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr [], int low, int high){
    if (low > high) return;
    int p = partition(arr, low, high);
    quickSort(arr, low, p - 1);
    quickSort(arr, p + 1, high);

}

int main(){

    return 0;
}


