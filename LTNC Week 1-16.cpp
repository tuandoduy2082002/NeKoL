#include<bits/stdc++.h>

using namespace std;

string check(int a,int b,int c) {
    if (a == b && b == c) return "true";
    return "false";
}

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    cout << check(a,b,c);

    system("pause");
    return 0;
}