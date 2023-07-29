#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string smallestString(string s) {
        int size = s.length(), itr = 0;
        while (itr < size && s[itr] == 'a') itr++;
        if (itr == size) {
            s[size - 1] = 'z';
            return s;
        }
        while (itr < size) {
            if (s[itr] != 'a') s[itr] = s[itr] - 1;
            else break;
            itr++;
        }
        return s;
    }
};