#include <iostream>

using namespace std;

void print(int j,int n) {
    int count = 0;
    for (int i = j; i <= n; i++) {
        cout << i << " ";
        count++;
    }
    if (count < n) {
        for (int i = 1; i < j; i++) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i=1;i<=n;i++) {
        print(i,n);
    }
    system("pause");
    return 0;
}