#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 1;
    vector<int> v;
    while (n >= 0) {
        cin >> n;
        v.push_back(n);
    }
    for (int i=0;i<v.size();i++) {
        if (v[i] != v[i+1]) {
            cout << v[i] << " ";
        }
    }
    system("pause");
    return 0;
}