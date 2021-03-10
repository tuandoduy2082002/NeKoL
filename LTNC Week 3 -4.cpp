#include <bits/stdc++.h>

using namespace std;

char numToString(int n)   
{
    return (char)(n+48);
}

char count(char arr[][100],int a,int b) {
    int temp = 0;
    if (arr[a-1][b-1] == '*') {
        temp++;
    } 
    if (arr[a-1][b] == '*') {
        temp++;
    } 
    if (arr[a-1][b+1] == '*') {
        temp++;
    } 
    if (arr[a][b-1] == '*') {
        temp++;
    } 
    if (arr[a][b+1] == '*') {
        temp++;
    } 
    if (arr[a+1][b-1] == '*') {
        temp++;
    }
    if (arr[a+1][b] == '*') {
        temp++;
    }
    if (arr[a+1][b+1] == '*') {
        temp++;
    }
    char c = numToString(temp);
    return c;
}

int main() {
    int m,n;
    cin >> m >> n;
    char a[100][100];
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cin >> a[i][j];
        }
    }
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            if (a[i][j] != '*') {
                a[i][j] = count(a,i,j);
            }
        }
    }
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}