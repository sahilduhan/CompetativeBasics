#include<bits/stdc++.h>
using namespace std;
void permutation(string s, int index = 0){
    if (index == s.size() - 1){
        cout << s << endl;
        return;
    }
    for (int i = index;i < s.size();i++){
        swap(s[i], s[index]);
        permutation(s, index + 1);
        swap(s[i], s[index]);
    }
}
int main(){
    permutation("abc");
    return 0;
}