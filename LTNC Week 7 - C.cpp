#include<bits/stdc++.h>
using namespace std;

int size;

char* reverse(const char* a) {
    char* res = new char[size];
    strcpy(res,a);
    for (int i=0;i<size/2;i++) {
        swap(res[i],res[size-i-1]);
    }
    return res;
}

char* delete_char(const char* a, char c) {
    int temp = 0;
    char* res = new char[size];
    strcpy(res,a);
    for (int i=0;i<size;i++) {
        if (a[i] == c) temp++;
    }
    for (int i=0;i<size;i++) {
        if (res[i] == c) {
            for (int j=i;j<size-1;j++) {
                res[j] = res[j+1];
            }
            i--;
        } 
    }
    int k = size - temp;
    char* ans = new char[k];
    for (int i=0;i<k;i++) {
        ans[i] = res[i];
    }
    ans[k] = '\0';
    return ans;
}

char* pad_right(const char* a, int n) {
    char* res = new char[size];
    strcpy(res,a);
    if (strlen(res) >= n) {
        return res;
    }
    char* ans = new char[n];
    for (int i=0;i<n;i++) {
        if (i < size) {
            ans[i] = res[i];
        } else {
            ans[i] = ' ';
        }
    }
    ans[n] = '\0';
    return ans;
}

char* pad_left(const char* a, int n) {
    char* res = new char[size];
    strcpy(res,a);
    if (strlen(res) >= n) {
        return res;
    }
    char* ans = new char[n];
    for (int i=n-1;i>=0;i--) {
        if (i >= n - size ) {
            ans[i] = res[i-n+size];
        } else {
            ans[i] = ' ';
        }
    }
    ans[n] = '\0';
    return ans;
}

char* truncate(const char* a, int n) {
    char* res = new char[size];
    strcpy(res,a);
    if (strlen(res) < n) {
        return res;
    }
    char* ans = new char[n];
    for (int i=0;i<n;i++) {
        ans[i] = res[i];
    }
    ans[n] = '\0';
    return ans;
}

char* trim_left(const char* a) {
    int i;
    char* res = new char[size];
    strcpy(res,a);
    int count = 0;
    for (i=0;res[i] == ' ';i++) {   
        count++;
    }
    char* ans = new char[size-count];
    for (i=0;i<size-count;i++) {
        ans[i] = res[i+count];
    }
    ans[size-count] = '\0';
    return ans;
}

char* trim_right(const char* a) {
    int i;
    char* res = new char[size];
    strcpy(res,a);
    int count = 0;
    for (i=size-1;res[i] == ' ';i--) {   
        count++;
    }
    char* ans = new char[size-count];
    for (i=0;i<size-count;i++) {
        ans[i] = res[i];
    }
    ans[size-count] = '\0';
    return ans;
}

int main() {
    char a[] = {' ',' ','t','u','a','n','d','e','p','t','r','a','i',' ','\0'};
    size = strlen(a);
    cout << "Xau a la: " << a << endl;

    cout << "Xau dao nguoc: ";
    char* a1 = reverse(a);
    cout << a1 << endl;

    cout << "Xau sau khi xoa ki tu : ";
    char* a2 = delete_char(a,'t');
    cout << a2 << endl;

    cout << "(chen phai) Xau co do dai bang n: ";
    char* a3 = pad_right(a,14);
    cout << a3 << "." << endl;

    cout << "(chen trai) Xau co do dai bang n: ";
    char* a4 = pad_left(a,14);
    cout << a4 << endl;

    cout << "xau sau khi cat de co do dai n: ";
    char* a5 = truncate(a,4);
    cout << a5 << endl;

    cout << "xau sau khi xoa space truoc:";
    char* a6 = trim_left(a);
    cout << a6 << endl;

    cout << "xau sau khi xoa space sau: ";
    char* a7 = trim_right(a);
    cout << a7 << "." << endl;

    system("pause");
    return 0;
}
