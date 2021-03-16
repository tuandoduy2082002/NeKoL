#include <bits/stdc++.h>

using namespace std;

char* concat(const char* a, const char* b) {
    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);
    int n = n1 + n2;
    char* res = new char[n];
    strcpy(res, a);
    strcat(res, b);
    return res;
}

int main() {
    cout << concat("a","b");
    system("pause");
    return 0;
}


