#include<bits/stdc++.h>

using namespace std;

double distance(int x,int y) {
    return sqrt (x*x + y*y);
}

int main() {
    int x,y;
    cin >> x >> y;
    double d;
    d = distance(x,y);
    cout << d;
    system("pause");
    return 0;
}