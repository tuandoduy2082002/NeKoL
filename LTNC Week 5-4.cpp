#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        for (int j=-n+1;j<n;j++) {
            if (abs(j) + i < n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}