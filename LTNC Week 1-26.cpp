#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    int max = a[0];
    int min = a[0];
    double tb;
    int sum = 0;
    for (int i=0;i<n;i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
        sum += a[i];
    }
    tb = (double) sum / n;
    cout << max << endl << min << endl << tb << endl;
    system("pause");
    return 0;
}