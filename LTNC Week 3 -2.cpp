#include <bits/stdc++.h>
using namespace std;

bool checkString(string s) {
    for (int i=0;i<s.length()/2;i++) {
        if (s[i] != s[s.length()-1-i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if (checkString(s)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    system("pause");
    return 0;
}