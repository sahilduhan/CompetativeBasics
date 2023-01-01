#include<bits/stdc++.h>
using namespace std;
void subSets(string s, string temp, int i, int j){
    if (i == s.size()){
        cout << temp << endl;
        return;
    }
    subSets(s, temp, i + 1, j + 1);
    temp.push_back(s[i]);
    subSets(s, temp, i + 1, j);
}
int main(){
    string s = "abc";
    subSets(s, "", 0, 1);

    return 0;
}