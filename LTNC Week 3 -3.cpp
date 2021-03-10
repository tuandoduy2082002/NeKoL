#include <bits/stdc++.h>

using namespace std;

int daonguocso(int n) {
    int a,r;
    int k=n;
    int daonguoc = 0;
    for (a=n;n != 0;n /= 10) {
        r = n % 10;
        daonguoc = daonguoc * 10 + r;
    }
    return daonguoc;
}

bool checkNumber(int n) {
    if (n == daonguocso(n)) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        int count = 0;
        for (int k = a;k <= b;k++) {
            if (checkNumber(k) == true) count++;
        }
        cout << count << endl;
    }
    system("pause");
    return 0;
}