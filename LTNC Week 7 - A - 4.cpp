#include <bits/stdc++.h>

using namespace std;

int main() {
    int i = 5;
    int* pointer = &i;
    *pointer = 0;
    cout << "Value: " << i << endl;
    delete pointer;
    
// khi phân bổ động ta đã gán địa chỉ của biến vào con trỏ xong rồi gán giá trị cho con trỏ  
// khi ta delete pointer thì bộ nhớ được cấp phát sẽ bị giải phóng dẫn đến giá trị của con trỏ bị phân bố loạn
// dẫn đến thất thoát bộ nhớ
    cout << "This does not print" << endl;
    return 0;
}

