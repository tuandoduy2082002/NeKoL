#include<bits/stdc++.h>

using namespace std;

string fibonacci(int n) {
    if (n == 0) return "a";
    if (n == 1) return "b";
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);

    system("pause");
    return 0;
}