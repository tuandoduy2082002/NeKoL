#include<bits/stdc++.h>

using namespace std;

bool check(int n) {
    if(n % 100 == 0 && n % 4 == 0 ) return true;
    if(n % 4 == 0) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    if (check(n)) {
        cout << "true";
    } else {
        cout << "false";
    }
    system("pause");
    return 0;
}