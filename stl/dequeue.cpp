#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq = {1, 2, 3, 3, 1, 23, 32};
    for (auto it : dq){
        if (dq.size() < 3) break;
        cout << dq.front() << " ";
        dq.pop_front();
    }
    return 0;
}