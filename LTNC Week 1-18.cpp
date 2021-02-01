#include<bits/stdc++.h>

using namespace std;

double euclid(int x1, int x2, int y1, int y2) {
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main() {
    int x1,x2,y1,y2;
    cin >> x1 >> x2 >> y1 >> y2;
    cout << euclid(x1,x2,y1,y2);

    system("pause");
    return 0;
}