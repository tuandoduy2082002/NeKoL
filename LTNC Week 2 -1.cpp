#include<iostream>
#include<math.h>

using namespace std;

bool primeNumber(int n) {
    if (n < 2) return false;
    for (int i=2;i<=sqrt(n);i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if (primeNumber(n)) {
        cout << "true";
    } else {
        cout << "false";
    }
    system("pause");
    return 0;
}