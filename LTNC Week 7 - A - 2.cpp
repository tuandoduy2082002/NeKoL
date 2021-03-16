#include <bits/stdc++.h>

using namespace std;

int main() {
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; 
    *p2 = 100;
    cout << *p2;
    delete p2;
    return 0;
}

// ở trên có gán p2 = p, mà ở dưới delete p -> p2 không tồn tại trong vùng nhớ nữa 
// p2 trỏ tới p mà p bị xóa -> vô định -> lỗi