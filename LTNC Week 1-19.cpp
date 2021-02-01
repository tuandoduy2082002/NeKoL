#include<bits/stdc++.h>

using namespace std;

int main() {
    int x,y,z;
    cin >> x >> y >> z;
    bool b = true;
    if (x < y && y < z) {
        b = true;
    } else if (x>y && y>z) {
        b = true;
    } else {
        b = false;
    }
    cout << b;

    system("pause");
    return 0;
}