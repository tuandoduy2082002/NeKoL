#include<bits/stdc++.h>

using namespace std;

double triangleArea(double a,double b,double c) {
    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main() {
    double a,b,c;
    cin >> a >> b >> c;
    cout << triangleArea(a,b,c);
    system("pause");
    return 0;
}