#include<bits/stdc++.h>
using namespace std;

void solve(char arr [], int number){
    int j = 0;
    while (number > 0){
        int lastBit = 0;
        lastBit = number & 1;
        if (lastBit) cout << arr[j];
        j++;
        number = number >> 1;
    }
    cout << endl;
}

void allSubSequences(char arr []){
    int n = strlen(arr);
    for (int i = 0;i < (1 << n);i++){
        solve(arr, i);
    }
}
int main(){
    char arr[100];
    cin >> arr;
    allSubSequences(arr);


    return 0;
}