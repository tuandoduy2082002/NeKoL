#include <bits/stdc++.h>

using namespace std;

char* concat(char* a,char* b) {
    char* res;
    res = a;
    int n1 = strlen(a);
    int n2 = strlen(b);
    int j = 0;
    for (int i = n1; i < n1+n2; i++) {
        res[i] = b[j];
        j++;
    }
    return res;
}