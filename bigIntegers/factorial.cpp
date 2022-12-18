#include<bits/stdc++.h>
using namespace std;
void multiply(vector<int>& arr, int num, int& size){
    int carry = 0;
    for (int i = 0;i < size;i++){
        int product = arr[i] * num + carry;
        int digit = product % 10;
        carry = product / 10;
    }
    while (carry){
        arr[size] = carry % 10;
        carry /= 10;
        size++;
    }
}
void solve(int num){
    vector<int>arr(1000, 0);
    arr[0] = 1;
    int size = 1;
    for (int i = 2;i <= num;i++){
        multiply(arr, i, size);
    }

    for (int i = size - 1;i >= 0;i--){
        cout << arr[i];
    }
    cout << endl;


}
int main(){

    int n1;
    cin >> n1;

    return 0;
}