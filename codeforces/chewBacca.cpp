#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100];
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] >= '5' && s[i] <= '9'){
            if (i == 0 && s[i] == '9')	continue;
            s[i] = '0' + '9' - s[i];
        }
    }
    printf("%s\n", s);
    return 0;
}