#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        digits[n-1]++;
        if (digits[n-1] < 10) {
            return digits;
        } else {
            int k = digits[n-1] % 10;
            digits.push_back(k);
            digits[n-1] /= 10;
        }
        return digits;
    }
};