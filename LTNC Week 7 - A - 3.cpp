#include <bits/stdc++.h>

using  namespace std;

int main() {
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
//    a: -aaaaaaaaa-
    cerr <<"c: " << "-" << c << "-" << endl;
//    c: -aaaaaa-

    
    delete c;

    cerr << "a after deleting c:" << "-" << a << "-" << endl;
// lệnh cerr thứ 3 chạy không dúng mong muốn 
    return 0;
}
