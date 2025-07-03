#include <bits/stdc++.h>
using namespace std;

bool isOdd(int n) {
    return n % 2 == 1;
}

bool isBinaryPalindrome(int n) {
    string bin = "";
    while (n > 0) {
        bin += (n % 2) + '0';
        n /= 2;
    }
    int l = 0, r = bin.size() - 1;
    while (l < r) {
        if (bin[l] != bin[r])
            return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    if (isOdd(N) && isBinaryPalindrome(N))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}