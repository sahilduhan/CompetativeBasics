#include<bits/stdc++.h>
using namespace std;
int main(){

    priority_queue<int>pq;

    priority_queue<int, vector<int>, greater<int>>pq2;

    for (int i = 0;i < 10;i++){
        int num;
        cin >> num;
        pq.push(num);
        pq2.push(num);
    }
    while (pq.size()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    while (pq2.size()){
        cout << pq2.top() << " ";
        pq2.pop();
    }
    cout << endl;
    return 0;
}